#include <iostream>

using namespace std;

int main() {
    int d = 0;
    cin >> d;
    int* tab = new int[d];
    int porzadek = 0;

    for(int i = 0; i < d; i++) {
        cin >> tab[i];
    }

    // uporzadkowana
    for(int i = 0; i < d - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            if (porzadek != 0 && porzadek != 1) {
                cout << "nie jest uporzadkowana" << endl;
                break;
            }

            porzadek = 1;
        }
        else {
            if (porzadek != 0 && porzadek != -1) {
                cout << "nie jest uporzadkowana" << endl;
                break;
            }
            porzadek = -1;
        }
    }

    if(porzadek == 1) {
        cout << "rosnaco" << endl;
    } else if (porzadek == -1) {
        cout << "malejaco" << endl;
    }

    // symetryczna
    for(int i = 0; i < d/2; i++) {
        if (tab[i] != tab[d-(i+1)]) {
            cout << "brak symetrii" << endl;
            break;
        }
    }

    // powtorzenie
    int powtorzenie = 0;
    for(int i = 0; i < d; i++) {
        for(int y = i + 1; y < d; y++) {
            cout << tab[i] << tab[y] << endl;
            if (tab[i] == tab[y]) {
                powtorzenie = 1;
                break;
            };
        }
    }
    if (powtorzenie == 1) {
        cout << "powtorzenie" << endl;
    }


    delete [] tab;

    return 0;
}