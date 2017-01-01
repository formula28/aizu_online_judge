#include <iostream>
using namespace std;

/**
AOJ ITP1_11_C Dice III.
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_11_C
サイコロシミュレーション.
*/
class Dice {
    private:
        int num[6];

        Dice* rotate(int top, int front) {
            Dice* ret = NULL;
            if (top == 0) {
                if (front == 1) {
                    ret = new Dice(num[0], num[1], num[2], num[3], num[4], num[5]);
                } else if (front == 2) {
                    ret = new Dice(num[0], num[2], num[4], num[1], num[3], num[5]);
                } else if (front == 4) {
                    ret = new Dice(num[0], num[4], num[3], num[2], num[1], num[5]);
                } else if (front == 3) {
                    ret = new Dice(num[0], num[3], num[1], num[4], num[2], num[5]);
                }
            } else if (top == 1) {
                if (front == 0) {
                    ret = new Dice(num[1], num[0], num[3], num[2], num[5], num[4]);
                } else if (front == 3) {
                    ret = new Dice(num[1], num[3], num[5], num[0], num[2], num[4]);
                } else if (front == 5) {
                    ret = new Dice(num[1], num[5], num[2], num[3], num[0], num[4]);
                } else if (front == 2) {
                    ret = new Dice(num[1], num[2], num[0], num[5], num[3], num[4]);
                }
            } else if (top == 2) {
                if (front == 0) {
                    ret = new Dice(num[2], num[0], num[1], num[4], num[5], num[3]);
                } else if (front == 1) {
                    ret = new Dice(num[2], num[1], num[5], num[0], num[4], num[3]);
                } else if (front == 5) {
                    ret = new Dice(num[2], num[5], num[4], num[1], num[0], num[3]);
                } else if (front == 4) {
                    ret = new Dice(num[2], num[4], num[0], num[5], num[1], num[3]);
                }
            } else if (top == 3) {
                if (front == 0) {
                    ret = new Dice(num[3], num[0], num[4], num[1], num[5], num[2]);
                } else if (front == 4) {
                    ret = new Dice(num[3], num[4], num[5], num[0], num[1], num[2]);
                } else if (front == 5) {
                    ret = new Dice(num[3], num[5], num[1], num[4], num[0], num[2]);
                } else if (front == 1) {
                    ret = new Dice(num[3], num[1], num[0], num[5], num[4], num[2]);
                }
            } else if (top == 4) {
                if (front == 0) {
                    ret = new Dice(num[4], num[0], num[2], num[3], num[5], num[1]);
                } else if (front == 2) {
                    ret = new Dice(num[4], num[2], num[5], num[0], num[3], num[1]);
                } else if (front == 5) {
                    ret = new Dice(num[4], num[5], num[3], num[2], num[0], num[1]);
                } else if (front == 3) {
                    ret = new Dice(num[4], num[3], num[0], num[5], num[2], num[1]);
                }
            } else if (top == 5) {
                if (front == 1) {
                    ret = new Dice(num[5], num[1], num[3], num[2], num[4], num[0]);
                } else if (front == 3) {
                    ret = new Dice(num[5], num[3], num[4], num[1], num[2], num[0]);
                } else if (front == 4) {
                    ret = new Dice(num[5], num[4], num[2], num[3], num[1], num[0]);
                } else if (front == 2) {
                    ret = new Dice(num[5], num[2], num[1], num[4], num[3], num[0]);
                }
            }
            return ret;
        }

    public:
        Dice(int *_num) {
            for (int i=0;i<6;i++) {
                num[i] = _num[i];
            }
        }
        Dice(int n0, int n1, int n2, int n3, int n4, int n5) {
            num[0] = n0;
            num[1] = n1;
            num[2] = n2;
            num[3] = n3;
            num[4] = n4;
            num[5] = n5;
        }

        int getNum(int id) {
            int ret = -1;
            if (0 <= id && id < 6) ret = num[id];
            return ret;
        }

        bool equals(Dice* dice) {
            bool ret = false;
            Dice* tmp = NULL;
            for (int i=0;i<6 && !ret;i++) {
                for (int j=0;j<6;j++) {
                    if (i==j || i+j == 5) continue;
                    tmp = this->rotate(i, j);
                    if (tmp != NULL
                        && dice->getNum(0) == tmp->getNum(0)
                        && dice->getNum(1) == tmp->getNum(1)
                        && dice->getNum(2) == tmp->getNum(2)
                        && dice->getNum(3) == tmp->getNum(3)
                        && dice->getNum(4) == tmp->getNum(4)
                        && dice->getNum(5) == tmp->getNum(5)
                        ) {
                        ret = true;
                        break;
                    }
                }
            }
            return ret;
        }
};

int main() {
    int D1num[6], D2num[6];
    cin >> D1num[0] >> D1num[1] >> D1num[2] >> D1num[3] >> D1num[4] >> D1num[5];
    cin >> D2num[0] >> D2num[1] >> D2num[2] >> D2num[3] >> D2num[4] >> D2num[5];
    Dice D1(D1num);
    Dice D2(D2num);
    cout << ((D1.equals(&D2))?"Yes":"No") << endl;
    return 0;
}
