#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, h, okna, wymiarokna, drzwi, drzwia, drzwib;
    float pp, pb, pc, pd, po;

    cin >> a >> b >> h >> okna >> wymiarokna >> drzwi >> drzwia >> drzwib;

    pp = a * b;
    pb = (2 * a * h) + (2 * b * h);
    pc = pp + pb;
    pd = drzwia * drzwib;
    po = wymiarokna * wymiarokna;
    pc = pc - (okna * po) - (drzwi * pd);
    pc = pc / 5;

    cout << "litry farby: " << pc;

}