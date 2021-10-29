#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int r = 0;
    int h = 0;
    float pole, objetosc;
    char op;

    while(r < 1) {
        cout << "Podaj promien podstawy\n";
        cin >> r;
    }

    while(h < 1) {
        cout << "Podaj wysokosc walca\n";
        cin >> h;
    }

    cout << "Podaj opcje:\nO - objetosc,\nP - pole podstawy\n";
    cin >> op;
    while(op != 'o' && op != 'O' && op != 'p' && op != 'P') {
        cout << "Podaj opcje:\nO - objetosc,\nP - pole podstawy\n";
        cin >> op;
    }

    if (op == 'o' || op == 'O') {
        objetosc = M_PI * pow(r, 2) * h;

        cout << "V: " << objetosc;
    } else if (op == 'p' || op == 'P') {
        pole = M_PI * pow(r, 2);

        cout << "PP: " << pole;
    }

    return 0;
}