#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int c;
    cin >> c;

    if (c % 2 == 0) {
        cout << c*c*c;
    } else {
        cout << cbrt(c);
    }
}