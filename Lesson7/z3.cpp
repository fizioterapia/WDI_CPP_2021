#include <iostream>

using namespace std;

int main() {
    int d = 0;
    cin >> d;
    int* tab = new int[d];

    for(int i = 0; i < d; i++) {
        cin >> tab[i];
    }

    for(int i = 0; i < d; i++) {
        if (tab[i] < 0) continue;
        else {
            cout << tab[i] << " dodatnia!" << endl;
            break;
        }
    }

    delete [] tab;

    return 0;
}