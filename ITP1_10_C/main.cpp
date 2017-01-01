#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

/**
AOJ ITP1_10_C Standard Deviation.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_C
標準偏差.
*/
int main() {
    int n,i;
    long long S;
    double A,m;
    while (cin >> n && n) {
        int s[n];
        S = 0L;
        for (i=0;i<n;i++) {
            cin >> s[i];
            S += s[i];
        }
        m = (double) S/n;
        A = 0.0f;
        for (i=0;i<n;i++) {
            A += (s[i] - m) * (s[i] - m);
        }
        printf("%.8lf\n", sqrt(A/n));
    }
    return 0;
}
