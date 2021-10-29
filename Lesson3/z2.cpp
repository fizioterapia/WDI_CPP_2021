#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcja;
    float promien;

    cout << "1 | Pole Powierzchni\n2 | Objectosc\n";
    cout << "Podaj opcje";
    cin >> opcja;

    while (opcja != 1 && opcja != 2) {
        cin >> opcja;
    }

    cout << "Podaj promien";
    cin >> promien;

    if (opcja == 1) 
        cout << "PP: " << 4 * M_PI * promien * promien;
    if (opcja == 2)
        cout << "V: " << (4/3)*(M_PI*M_PI*M_PI);

    return 0;
}