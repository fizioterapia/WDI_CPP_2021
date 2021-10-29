#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    cout << "f(x) = ax^2+bx+c = " << a*pow(x, 2) + b*x + c;
    return 0;
}   