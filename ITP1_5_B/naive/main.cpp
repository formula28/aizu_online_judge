#include <iostream>
#include <sstream>
using namespace std;

/**
AOJ ITP1_5_B Print a Frame.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_B
文字列.
*/
int main() {
    int H,W,i;
    string tpbtmF,mdlF;
    while(cin>>H>>W && (H!=0 || W!=0)){
        tpbtmF = string(W,'#');
        stringstream ss;
        ss << "#";
        if (W>2) ss << string(W-2,'.');
        if (W>=2) ss << "#";
        mdlF = ss.str();

        cout << tpbtmF << endl;
        for (i=1;i<H-1;i++) {
            cout << mdlF << endl;
        }
        if (H>=2) cout << tpbtmF << endl;
        cout << endl;
    }
    return 0;
}
