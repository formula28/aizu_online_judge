#include <iostream>
using namespace std;

/**
AOJ ITP1_6_D Matrix Vector Multiplication.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_D
行列とベクトルの積.
*/
int main() {
    int n,m,i,j;
    cin >> n >> m;
    int a[n][m],b[m],c[n];
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) cin >> a[i][j];
    }
    for (j=0;j<m;j++) cin >> b[j];
    for (i=0;i<n;i++) {
        c[i] = 0;
        for (j=0;j<m;j++) {
            c[i] += a[i][j] * b[j];
        }
        cout << c[i] << endl;
    }
    return 0;
}
