#include <iostream>

using namespace std;

int main() {
    /*
        Napisać program wczytujący z klawiatury dwie daty 
        (zapisane za pomocą trzech liczb całkowitych, oznaczających dzień, miesiąc i rok) 
        i sprawdzający, czy te daty są prawidłowe (uzwględniając przy tym przestępność lat)
        oraz czy pierwsza data jest wcześniejsza od drugiej.
    */

    int dni[12] = {
        31,
        28,
        31,
        30,
        31,
        30,
        31,
        31,
        30,
        31,
        30,
        31
    };

    string invalid_response = "Podana wartosc jest nieprawidlowa.\n";
    string good = "Rok pierwszy jest mniejszy od roku drugiego.\n";
    string bad = "Rok pierwszy jest wiekszy badz rowny roku drugiemu.\n";

    int d1, d2, m1, m2, r1, r2, p1, p2, dc1, dc2;
    p1 = 0;
    p2 = 0;

    cin >> d1 >> m1 >> r1 >> d2 >> m2 >> r2;

    if (r1 % 4 == 0 && (r1 % 100 != 0 || r1 % 400 == 0)) p1 = 1;
    if (r2 % 4 == 0 && (r2 % 100 != 0 || r2 % 400 == 0)) p2 = 1;

    if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12) {
        if (d1 > 31 || d1 < 1) {
            cout << invalid_response;
            exit(1);
        }
    } else if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) {
        if (d1 > 30 || d1 < 1) {
            cout << invalid_response;
            exit(1);
        }
    } else if (m1 == 2) {
        if (p1 == 1) {
            if (d1 > 29 || d1 < 1) {
                cout << invalid_response;
                exit(1);
            }
        } else {
            if (d1 > 28 || d1 < 1) {
                cout << invalid_response;
                exit(1);
            }
        }
    } else {
        cout << invalid_response;
        exit(1);
    }

    if (m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10 || m2 == 12) {
        if (d2 > 31 || d2 < 1) {
            cout << invalid_response;
            exit(1);
        }
    } else if (m2 == 4 || m2 == 6 || m2 == 9 || m2 == 11) {
        if (d2 > 30 || d2 < 1) {
            cout << invalid_response;
            exit(1);
        }
    } else if (m2 == 2) {
        if (p2 == 1) {
            if (d2 > 29 || d2 < 1) {
                cout << invalid_response;
                exit(1);
            }
        } else {
            if (d2 > 28 || d2 < 1) {
                cout << invalid_response;
                exit(1);
            }
        }
    } else {
        cout << invalid_response;
        exit(1);
    }

    dc1 = d1;
    for(int i = 0; i < m1; i++) {
        dc1 += dni[i];
    }
    dc1 += r1 * 500;

    dc2 = d2;
    for(int i = 0; i < m2; i++) {
        dc2 += dni[i];
    }
    dc2 += r2 * 500;

    if (dc1 < dc2) {
        cout << good;
    } else {
        cout << bad;
    }

    return 0;
}