#include <iostream>
#include <cstdio>
using namespace std;

/**
AOJ ITP1_3_B Print Test Cases
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_B
やるだけ.
*/
int main() {
    int x,i=1;
    while (cin >> x && x!= 0) {
        printf("Case %d: %d\n", i++, x);
    }
    return 0;
}