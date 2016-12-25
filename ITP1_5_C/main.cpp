#include <iostream>
using namespace std;

/**
AOJ ITP1_5_C Print a Chessboard.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_C
文字列.
*/
int main() {
    int H,W,i,j;
    while (cin>>H>>W && (H!=0 || W!=0)) {
        for (i=0;i<H;i++) {
            for (j=0;j<W;j++) {
                cout << ((i+j)%2==0?'#':'.');
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
