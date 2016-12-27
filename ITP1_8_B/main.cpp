#include <iostream>
using namespace std;

/**
AOJ ITP1_8_B Sum of Numbers.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_B
10進数各桁合計.
*/
int main() {
    string x;
    int ans,i;
    while (cin>>x && x != "0") {
        ans = 0;
        for (i=0;i<x.size();i++) {
            ans += x[i] - '0';
        }
        cout << ans << endl;
    }
    return 0;
}
