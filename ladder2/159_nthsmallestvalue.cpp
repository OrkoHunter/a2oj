/*
Problem Statement:
For this problem, you will write a program that prints the Nth smallest value in a
fixed sized array of integers. To make things simple, N will be 2 and the array
will always be have 10 decimal integer values.


Input Format:
The first line of input contains a single integer T, (1 ≤ T ≤ 1000), which is the
number of test cases. Each case consists of a single line containing 10 integers
whose values are between 1 and 1000 inclusive.


Output Format:
For each case, print on one line the 2nd value.


Sample Input:
3
1 2 3 4 5 6 7 8 9 1000
338 304 619 95 343 496 489 116 98 127
1 1 2 3 4 5 6 7 8 9


Sample Output:
2
98
1

URL : http://a2oj.com/p.jsp?ID=159
*/

#include <iostream>
#include <list>

using namespace std;

int main() {
    int T, no;
    list<int> numbers;
    list<int>::iterator it;

    cin >> T;
    for (int i=0; i<T; i++) {
        numbers.clear();
        for (int j=0; j<10; j++) {
            cin >> no;
            numbers.push_back(no);
        }
        numbers.sort();
        it = numbers.begin();
        ++it;
        cout << *it << endl;
    }
}
