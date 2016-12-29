#include <iostream>
using namespace std;

/**
AOJ ITP1_9_B Shuffle.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_B
文字列ローテーション.
*/
int main() {
    string s;
    int n,h,H,i;
    while (cin >> s) {
        if (s == "-") break;
        cin >> n;
        H = 0;
        for (i=0;i<n;i++) {
            cin >> h;
            H += h;
        }
        H %= s.size();
        cout << s.substr(H) << s.substr(0,H) << endl;
    }
    return 0;
}
