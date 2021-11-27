#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int G = 0;
    cin >> G;

    int** W = new int*[G];

    for(int x = 0; x < G; x++) {
        W[x] = new int[G];

        for(int y = 0; y < G; y++) {
            cout << "Siema mordo podaj element tabeli W[" << x << "][" << y << "]: ";
            cin >> W[x][y];
        }
    }

    for(int x = 0; x < G; x++) {
        cout << setw(1);
        for(int y = 0; y < G; y++) {
            if (y > 0) {
                cout << setw(3);
            }
            cout << W[y][x];
        }
        cout << endl;
    }

    return 0;
}