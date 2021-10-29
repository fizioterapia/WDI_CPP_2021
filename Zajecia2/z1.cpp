/*
    Napisać program pobierający od użytkownika boki prostopadłościanu (liczby całkowite) i zwracający jego pole podstawy, objętość, pole powierzchni bocznej i pole powierzchni całkowitej.
    Program ma wykonywać możliwie mało obliczeń (jeśli to możliwe, to należy do obliczenia kolejnej wartości wykorzystać wartość wyliczoną wcześniej)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, h, pp, pb, pc, v;
    cin >> a >> b >> h;

    pp = a * b;
    pb = (2 * a * h) + (2 * b * h);
    pc = (2 * pp) + pb;
    v = a * b * h;

    cout << "PP: " << pp << endl;
    cout << "PB: " << pb << endl;
    cout << "PC: " << pc << endl;
    cout << "V: " << v << endl;

    return 0;
}