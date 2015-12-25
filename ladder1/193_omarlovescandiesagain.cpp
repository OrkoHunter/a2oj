/*
Problem Statement:
Omar loves to eat a lot of candies, but unfortunately most of the candies are
not healthy. So his parents told him that he can go to the candies store, and
get as much as he wants but everything should be of the same type.

Omar is a smart boy, so he decided to find which type has the biggest quantity
in the store and he will get all candies of that type.

But he is still young and it might be hard for him to do this, can you help
him by writing a program to tell him which candy type to get?


Input Format:
Your program will be tested on one or more test cases. The first line of the
input will be a single integer T, the number of test cases (1 <= T <= 100).
Followed by the test cases, each test case is described in one line which
contains a non-empty string which consists of up to 100 letters, each letter
is a lower case English letter (from 'a' to 'z'). This string represents all
candies in the store, each candy is described using 1 character, so if the
string is "abac" this means the store contains 2 candies of type 'a', 1 candy
of type 'b' and 1 candy of type 'c'.


Output Format:
For each test case, print a single line which contains a single integer
representing the maximum number of candies that Omar can get followed by a
space then a letter which represents the kind of that candy, if there are
multiple candies with the same number, print the one which is represented by
the smallest letter in the English alphabet.


Sample Input:
3
abac
abc
zzz


Sample Output:
2 a
1 a
3 z

URL : http://a2oj.com/p.jsp?ID=193
*/

#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main() {
    int T, max;
    char max_candy;
    string candies;
    map <char, int> count;
    map <char, int>::iterator it;

    /* Test cases */
    cin >> T;
    for (int i=0; i<T; i++) {
        /* Loop re-declarations */
        max = 0;
        count.clear();

        cin >> candies;
        for (int j=0; j < candies.size(); j++) {
            ++count[candies[j]];
        }

        for (it = count.begin(); it != count.end(); it++) {
            if (it->second > max) {
                max = it->second;
                max_candy = it->first;
            }
        }

        cout << max << " " << max_candy << endl;

    }
}
