#include <iostream>
using namespace std;

/**
AOJ ITP1_8_A Toggling Cases.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_A
英大文字/小文字変換.
*/
int main() {
    string s;
    getline(cin, s);
    for (int i=0;i<s.size();i++) {
        if ('a' <= s[i] && s[i] <= 'z') s[i] += 'A' - 'a';
        else if ('A' <= s[i] && s[i] <= 'Z') s[i] += 'a' - 'A';
    }
    cout << s << endl;
    return 0;
}
