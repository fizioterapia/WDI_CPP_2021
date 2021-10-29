#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    const float podatek = 0.19;
    float pensja, wyplata;

    cin >> pensja;
    wyplata = pensja * (1.0 - podatek);

    // x = int(x*100)/100.0 -- 2 miejsca po przecinku
    cout << "Pensja (po podatku 19%): " << fixed << setprecision(2) << wyplata;

    return 0;
}