#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, x;
    float r, d, sqrtd;

    cin >> a >> b >> c >> x;

    r = a*(x*x)+b*x+c;

    d = (b*b)-(4*(a*c));
    sqrtd = sqrt(d);

    if (d < 0) {
        cout << "brak miejsc zerowych";
    } else if (d == 0) {
        cout << "1 miejsce zerowe | " << (-b / (2*a));
    } else {
        cout << "2 miejsca zerowe";
        cout << "x1: " << (-b+sqrtd)/(2 * a) << " x2: " << (-b-sqrtd)/(2 * a);
    }

    return 0;
}