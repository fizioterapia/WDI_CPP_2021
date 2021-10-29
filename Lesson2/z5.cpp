#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int f_mZnajomego;

    const float f_wNapoju = 1.2;
    const float f_iSlodzika = 0.01;

    const float i_mMyszy = 0.2;
    const float f_mSlodzika = 0.025;
    const float f_lethalDose = (f_wNapoju * f_iSlodzika) / f_mSlodzika;

    cin >> f_mZnajomego;
    cout << "Znajomy moze maksymalnie wypic: " << (f_mZnajomego * f_lethalDose) / 1.2 << " litrów.";

    return 0;
}