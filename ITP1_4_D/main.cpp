#include <iostream>
#include <cstdio>
using namespace std;

/**
AOJ ITP1_4_D Min, Max and Sum.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_D
数値計算 最大,最小,合計.
※合計値の範囲に注意.
*/
int main() {
    int n,a,m,M,i;
    long S;
    cin>>n>>a;
    m=M=a;
    S=a;
    for(i=1;i<n;i++) {
        cin>>a;
        if (a<m) m=a;
        if (M<a) M=a;
        S+=a;
    }
    printf("%d %d %ld\n", m, M, S);
    return 0;
}
