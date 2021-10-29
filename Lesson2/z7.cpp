#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    const float f_kusd = 3.5;
    const float f_keur = 4.5;
    const float f_kchf = 4.75;

    float f_pln, f_usd, f_eur, f_chf;

    cin >> f_pln;
    f_usd = f_pln / f_kusd;
    f_eur = f_pln / f_keur;
    f_chf = f_pln / f_kchf;

    cout << "f_pln: " << fixed << setprecision(2) << f_pln << endl;
    cout << "f_usd: " << fixed << setprecision(2) << f_usd << endl;
    cout << "f_eur: " << fixed << setprecision(2) << f_eur << endl;
    cout << "f_chf: " << fixed << setprecision(2) << f_chf << endl;

    return 0;
}