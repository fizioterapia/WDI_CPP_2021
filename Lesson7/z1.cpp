#include <iostream>

using namespace std;

int main() {
    int a, tmp, tmpb = 0;
    int pary = 0;

    do {
        cout << "gib number" << endl;
        cin >> a;

        if (a != 0) {
                if (a > tmpb) {
                    tmpb = a;
                } else if (tmp > tmpb) {
                    tmpb = tmp;
                }

                if (a + tmp < tmpb) {
                    pary++;

                    cout << "para: " << a << " | " << tmp << endl;
                }

                tmp = a;
            }
    } while(a != 0);

    cout << "liczba par: " << pary << endl;


    return 0;
}