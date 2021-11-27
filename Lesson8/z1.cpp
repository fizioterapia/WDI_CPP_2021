#include <iostream>

using namespace std;

int main() {
    int g, d, p = 0;
    cout << "Podaj liczbe g:";
    cin >> g;

    cout << "Podaj dlugosc tablicy: \n";
    cin >> d;
    int* tab = new int[d];

    for(int i = 0; i < d; i++) {
        cout << "Podaj liczbe tab[" << i << "]:";
        cin >> tab[i];
    }

    for(int i = 0; i < d; i++) {
        for(int k = i; k < d; k++) {
            if (tab[i] + tab[k] < g) {
                p++;

                cout << "Para! Numer: " << p << " " << tab[i] << ", " << tab[k] << endl;
            }
        }
    }

    delete [] tab;
}