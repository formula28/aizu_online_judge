#include <iostream>
using namespace std;

/**
AOJ ITP1_7_D Matrix Multiplication.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_D
行列の積.
*/
int main() {
    int n,m,l,i,j,k;
    cin >> n >> m >> l;
    long long a[n][m], b[m][l], c[n][l] = {};
    for (i=0;i<n;i++) for (j=0;j<m;j++) cin >> a[i][j];
    for (i=0;i<m;i++) for (j=0;j<l;j++) cin >> b[i][j];
    for (i=0;i<n;i++) {
        for (j=0;j<l;j++) {
            for (k=0;k<m;k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            cout << c[i][j] << (j==l-1?"\n":" ");
        }
    }
    return 0;
}
