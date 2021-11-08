#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int g;
    int l = 1;
    int z;

    cout << "hello gib number: ";
    cin >> g;

    z = g*g;

    while(z != 0) {
        l++;
        z = z / 10;
    }

    cout << setw(l) << endl;

    cout << setw(l) << "";
    for(int y = 1; y <= g; y++) {
        cout << setw(l) << 1 * y ;
    }
    cout << setw(l) << endl;

    for(int i = 1; i <= g; i++) {
        cout << i;
        for(int y = 1; y <= g; y++) {
            cout << setw(l) << i * y ;
        }

        cout << setw(l) << endl;
    }

    return 0;
}