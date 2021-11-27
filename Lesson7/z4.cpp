#include <iostream>

using namespace std;

int main() {
    int d = 0;
    int tmp = 0;
    cin >> d;
    int* tab = new int[d];
    int* newtab = new int[d];

    for(int i = 0; i < d; i++) {
        cin >> tab[i];
    }

    tmp = tab[d-1];
    for(int i=d-1;i>=0;i--) {
        tab[i+1] = tab[i];
    }
    tab[0] = tmp;

    for(int i = 0; i < d; i++) {
        cout << tab[i] << ", ";
    }

    delete [] tab;

    return 0;
}