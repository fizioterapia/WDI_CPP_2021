#include <iostream>

using namespace std;

int main() {
    int i, g, h = 0;

    cin >> g;
    while (g < 1) {
        cin >> g;
    }

    while(g > h) {
        i++;
        h += i;
    }

    cout << i;

    return 0;
}