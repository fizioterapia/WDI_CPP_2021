#include <iostream>

using namespace std;

int main() {
    int d,powtorzenia,flag;

    cout << "Podaj dlugosc tablicy: \n";
    cin >> d;
    int* tab = new int[d];

    for(int i = 0; i < d; i++) {
        cout << "Podaj liczbe tab[" << i << "]:";
        cin >> tab[i];
    }

    for(int i = 0; i < d; i++) {
        flag = 0;

        for(int z = i-1; z >= 0; z--) {
            if (tab[i] == tab[z]) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            powtorzenia = 0;

            for(int y = i+1; y < d; y++) {
                if (tab[i] == tab[y]) {
                    powtorzenia++;
                }
            }

            if (powtorzenia > 0)
                cout << "tab[" << i << "] | " << tab[i] << " powtorzone zostalo " << powtorzenia << " razy." << endl;
        }
    }

    delete [] tab;
}