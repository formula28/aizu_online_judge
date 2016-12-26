#include <iostream>
using namespace std;

/**
AOJ ITP1_7_A Grading.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_A
点数ランク判定.
*/
int main() {
    int m,f,r;
    char a;
    while (cin>>m>>f>>r) {
        if (m == -1 && f == -1 && r == -1) break;
        else if (m == -1 || f == -1) a = 'F';
        else if (m + f >= 80) a = 'A';
        else if (m + f >= 65) a = 'B';
        else if (m + f >= 50 || (m + f >= 30 && r >= 50)) a = 'C';
        else if (m + f >=30) a = 'D';
        else a = 'F';
        cout << a << endl;
    }
    return 0;
}
