/*
Problem Statement:
Some computer programs have problems in displaying Arabic text, especially
when mixed with English words in the same line, because Arabic is written from
right to left and English is written from left to right. In this problem we
will try to fix a text with some corrupted lines which consist of a mixture of
Arabic and English words. For simplicity, all Arabic letters will be replaced
with the letter '#'.

Each line will contain at most one English word. For a line containing an
English word, the program that will fix the text will swap the words before
the English word with the words after the English word. The words before the
English word will remain in the same order. The words after the English word
will also remain in the same order. For example, if the line is "# #### ###
abc ##", it will be fixed to become "## abc # #### ###".

Please note that a line that contains words only of the same language is not
corrupt.


Input Format:
Your program will be tested on one or more test cases. The first line of the
input will be a single integer T, the number of test cases (1 ≤ T ≤ 100). Next
2T lines contain the test cases, each on a pair of lines.

The first line of each case contains a single integer N, the number of words
in the line to fix (1 ≤ N ≤ 100). The second line contains N words, separated
by single spaces, with no leading or trailing spaces, and each word will be at
least 1 character and at most 10 characters long.

Each word will be either Arabic or English. Arabic words will consist of one
to ten '#' letters, and English words will consist of one to ten English lower
case letters.

Each line contains at most one English word.


Output Format:
For each test case, output, on a single line, the fixed line of input text.


Sample Input:
3
5
# #### ### abc ##
4
## ### ## #####
4
## ##### # xyz


Sample Output:
## abc # #### ###
## ### ## #####
xyz ## ##### #

URL : http://a2oj.com/p.jsp?ID=24
*/

#include <iostream>
#include <list>
#include <iterator>
#include <cstring>
#include <string>

using namespace std;

int main() {
    int T, words;
    string input, en_word;
    bool left_side;
    list<string> left;
    list<string> right;
    list<string>::iterator it;
    cin >> T;
    for (int i=0; i<T; i++) {
        left.clear();
        right.clear();
        left_side = true;
        en_word = "";
        cin >> words;
        for (int j=0; j<words; j++) {
            cin >> input;
            if (input[0] == '#') {
                if (left_side)
                    left.push_back(input);
                else
                    right.push_back(input);
            }
            else {
                left_side = false;
                en_word = input;
            }
        }
        for (it=right.begin(); it!=right.end(); ++it)
            cout << *it << " ";
        cout << en_word << " ";
        for (it=left.begin(); it!=left.end(); ++it)
            cout << *it << " ";
        cout << endl;
    }
}
