#include <iostream>
using namespace std;

/**
AOJ ITP1_5_A Print a Rectangle.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_A
文字列.
*/
int main() {
    int H,W,i;
    string o;
    while(cin>>H>>W && (H!=0 || W!=0)){
        o = string(W,'#');
        for (i=0;i<H;i++) {
            cout << o << endl;
        }
        cout << endl;
    }
    return 0;
}
