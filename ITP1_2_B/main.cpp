#include <iostream>
using namespace std;

/**
AOJ ITP1_2_B Range.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_B
整数値比較 ただやるだけ.
*/
int main() {
    int a,b, c;
    cin >> a >> b >> c;
    cout << (a < b && b < c ? "Yes" : "No") << endl;
    return 0;
}