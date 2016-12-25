#include <iostream>
using namespace std;

/**
AOJ ITP1_6_A Reversing Numbers.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_A
数列反転.
*/
int main() {
    int n,i;
    cin>>n;
    int x[n];
    for (i=0;i<n;i++) cin >> x[i];
    for (;--i>0;) cout << x[i] << " ";
    cout << x[0] << endl;
    return 0;
}
