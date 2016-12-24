#include <iostream>
using namespace std;

/**
AOJ ITP1_4_C Simple Calculator.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_C
構文解析.
*/
int main() {
    int a,b,ans;
    char op;
    while(cin >> a >> op >> b) {
        if (op == '+') ans = a+b;
        else if (op == '-') ans = a-b;
        else if (op == '*') ans = a*b;
        else if (op == '/') ans = a/b;
        else break;
        cout << ans << endl;
    }
    return 0;
}
