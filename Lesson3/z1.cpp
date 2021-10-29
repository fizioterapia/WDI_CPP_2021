#include <iostream>

using namespace std;

int main() {
    float a, x, b, r;
    cout << "Podaj A, X, B" << endl;
    cin >> a >> x >> b;
    r = a*x+b;
    

    if (a == 0 && b == 0) {
        cout << "ax+b=" << "nieskonczonosc" << endl;
    } else if (a > 0) {
        cout << "ax+b=" << -b/a << endl;
    } else {
        cout << "ax+b=" << "brak" << endl;
    }

    return 0;
}