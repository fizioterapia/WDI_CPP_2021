// Napisać program wypisujący wszystkie liczby pierwsze mniejsze od liczby podanej przez użytkownika (liczba pierwsza to taka liczba naturalna, która dzieli się tylko przez 1 i przez samą siebie).

#include <iostream>

using namespace std;

int main() {
    int g;
    cout << "hello gib number: ";
    cin >> g;

    for(int i = 1; i <= g; i++) {
        bool wypisz = true;

        for(int y = 1; y <= i; y++) {
            if (i % y == 0 && (y != i && y > 1)) {
                wypisz = false;
                break;
            } 
        }

        if (wypisz) cout << i << " ";
    }

    return 0;
}