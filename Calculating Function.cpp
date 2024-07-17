Codeforces limk: https://codeforces.com/problemset/problem/486/A

Problem:
For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line.


Solution:

--------------------------------------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>

using namespace std;


int main() {

long long n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2 << endl;
    } else {
        cout << -(n + 1) / 2 << endl;
    }

    return 0;

}





--------------------------------------------------------------------------------------------------------------------------------
