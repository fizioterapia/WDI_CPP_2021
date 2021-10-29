#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float c, k, f;

    cin >> c;
    k = c - 273.15;
    f = ((c * 9) / 5) + 32;

    cout << "C: " << c << endl;
    cout << "K: " << k << endl;
    cout << "F: " << f << endl;

    return 0;
}