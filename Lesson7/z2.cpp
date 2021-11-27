#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int tab[5];
    int l = 2;
    int z = 0;

    for(int x = 0; x < 5; x++) {
        cout << "hello 5ib number: ";
        cin >> tab[x];

        if (tab[x] > z) {
            z = tab[x];
        }
    }

    z = z * z;

    while(z != 0) {
        l++;
        z = z / 10;
    }

    cout << setw(l) << endl;

    cout << setw(l) << "";
        for(int y = 0; y < 5; y++) {
            cout << setw(l) << tab[y] ;
        }
    cout << setw(l) << endl;

    for(int i = 0; i < 5; i++) {
        cout << tab[i];
        for(int y = 0; y < 5; y++) {
            cout << setw(l) << tab[i] * tab[y];
        }

        cout << setw(l) << endl;
    }

    return 0;
}