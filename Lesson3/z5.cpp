/*
    Niedokończony, sprawdzić sylabus i dokończyć zadanie.
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2, k1, k2, kc;

    cin >> n1 >> n2 >> k1 >> k2;

    if (n1 > 8 || n2 > 4 || k1 > 40 || k2 > 60 ) {
        return 0;
    } else {
        k1 = k1 - (n1 * 5);
        k2 = k2 - (n2 * 5);
        kc = k1 + k2;

        if (kc > 50 && kc < 59) {
            cout << "dst";
        } else if (kc >= 60 && kc < 70) {
            cout << "dst+";
        } else if (kc >= 70 && kc < 80) {
            cout << "dobry";
        } else if (kc >= 80 && kc < 90) {
            cout << "dobry+";
        } else if (kc >= 90 && kc <= 100) {
            cout << "bardzo dobry";
        } else {
            cout << "uwaliles";
        }
    }

    return 0;
}