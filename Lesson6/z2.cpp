/*
Napisać program pobierający od użytkownika liczby całkowite w taki sposób, że wprowadzenie zera zakańcza podawanie, a następnie wypisujący sumę wprowadzonych liczb, ich ilość i średnią oraz największą i najmniejszą wprowadzoną liczbę (wyniki mają nie uwzględniać końcowego zera).
*/

#include <iostream>

using namespace std;

int main() {
    int i=0,a=0,b=0,sum=0;
    float sr = 0, ilo = 0;

    do {
        cin >> i;

        if (i != 0) {
            sum += i;
            ilo += 1;

            if (a < i || a == 0) {
                a = i;
            } else if (b > i || b == 0) {
                b = i;
            }
        }

    } while (i != 0);

    sr = sum / ilo;

    cout << "Najwieksza: " << a << endl;
    cout << "Najmniejsza: " << b << endl;
    cout << "Suma: " << sum << endl;
    cout << "Srednia: " << sr << endl;

    return 0;
}