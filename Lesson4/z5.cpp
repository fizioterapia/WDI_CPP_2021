#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x,p,w = 0;

    cin >> x;

    while (x < 1 || x > 9) {
        cin >> x;
    }

    while(w < 1000000) {
        p++;
        w = pow(x, p);
    }

    cout << "X: " << x << " | P: " << p;

    return 0;
}