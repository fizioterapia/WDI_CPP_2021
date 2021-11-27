#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int G = 0;
    cout << "Podaj wielkosc kwadratowa tablicy: ";
    cin >> G;

    int** W = new int*[G];
    int** D = new int*[G];
    int** SUM = new int*[G];
    int** ILO = new int*[G];

    for(int x = 0; x < G; x++) {
        W[x] = new int[G];
        D[x] = new int[G];
        SUM[x] = new int[G];
        ILO[x] = new int[G];

        for(int y = 0; y < G; y++) {
            cout << "Podaj elementy W[" << x << "][" << y << "] i D[" << x << "][" << y << "]" << ": ";
            cin >> W[x][y] >> D[x][y];
        }
    }

    cout << "SUMA:\n";
    for(int x = 0; x < G; x++) {
        for(int y = 0; y < G; y++) {
            cout << setw(1);
            if (y > 0) cout << setw(5);
            SUM[x][y] = W[x][y] + D[x][y];
            cout << SUM[x][y];
        }
        cout << endl;
    }

    cout << "ILOCZYN:\n";
    for(int x = 0; x < G; x++) {
        for(int y = 0; y < G; y++) {
            cout << setw(1);
            if (y > 0) cout << setw(5);
            ILO[x][y] = W[x][y] * D[x][y];
            cout << ILO[x][y];
        }
        cout << endl;
    }

    for(int i = 0; i < G; i++) {
        delete [] W[i];
        delete [] D[i];
        delete [] ILO[i];
        delete [] SUM[i];
    }

    delete [] W;
    delete [] D;
    delete [] ILO;
    delete [] SUM;

    return 0;
}