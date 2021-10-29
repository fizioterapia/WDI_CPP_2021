/*
    Rozwiąż równanie x^5+x-1=0 z dokładnością do 1/100
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double i = 1;
    double y = 1;
    float w = -1;

    while(w != 0 && i > 0) {
        i -= i / 2;
        y = 1 - i;

        cout << fixed << setprecision(2);

        w = pow(i, 5) + i - 1;
        cout << "[1] i: " << i << " | " << "y:" << y << " | " << " w: " << w << endl;

        w = pow(y, 5) + y - 1;
        cout << "[2] i: " << i << " | " << "y:" << y << " | " << " w: " << w << endl;
    }

    return 0;
}