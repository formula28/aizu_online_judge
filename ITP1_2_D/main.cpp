#include <iostream>
using namespace std;

/**
AOJ ITP1_2_D Circle in a Rectangle.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_D
図形内外問題 やるだけ.
*/
int main() {
    int W,H,x,y,r;
    cin >> W >> H >> x >> y >> r;
    cout << ((x-r < 0 || W < x+r || y-r < 0 || H < y+r) ? "No" : "Yes") << endl;
    return 0;
}