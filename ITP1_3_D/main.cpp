#include <iostream>
using namespace std;

/**
AOJ ITP1_3_D How Many Divisors?.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_D
数の問題 約数の数.
*/
int main() {
    int a,b,c,i,j=0;
    cin >> a >> b >> c;
    for (i=a; i<=b && i<=c; i++) {
        if (c%i == 0) j++;
    }
    cout << j << endl;
    return 0;
}
