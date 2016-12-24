#include <iostream>
#include <stdio.h>
using namespace std;

/**
AOJ ITP1_2_A Small, Large, or Equal.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_A
整数値比較 ただやるだけ.
*/
int main() {
    int a,b;
    cin >> a >> b;
    printf("a %s b\n", (a == b ? "==" : (a > b ? ">" : "<")));
    return 0;
}