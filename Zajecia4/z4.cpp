#include <iostream>

using namespace std;

int main() {
    int i, y, g, n, h;
    g = 0;
    n = 0;

    while (g < 1) {
        cin >> g;
    }

    while (n < 1) {
        cin >> n;
    }

    while(g > h) {
        i++;
        if(i % n == 0) {
            y++;
            h += i;   
        }
    }

    cout << y;

    return 0;
}