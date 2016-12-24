#include <iostream>
using namespace std;

/**
AOJ ITP1_3_C Swapping Two Numbers.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_C
やるだけ.
*/
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main() {
    int x,y;
    while (cin >> x >> y && (x != 0 || y != 0)) {
        if (x > y)swap(&x,&y);
        cout << x << " " << y << endl;
    }
    return 0;
}