#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, t, x, p;
    float r;

    cin >> a >> b >> c;

    t = a;
    x = 1;
    if (t < b) {
        t = b;
        x = 2;
    }
    if (t < c) {
        t = c;
        x = 3;
    }

    if (x == 1 && (b+c)>a || x == 2 && (a+c)>b || x == 3 && (a+b) > c) {
        p = (a+b+c)/2.0;
        p = sqrt(p*(p-a)*(p-b)*(p-c));

        cout << "Pole: " << p;
    } else {
        cout << "Nieprawidlowy trojkat";
    }


    return 0;
}