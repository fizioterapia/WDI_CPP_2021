#include <iostream>

using namespace std;

int main() {
    int dzien = 1;
    float wagaA, wagaD, wagaT, wagaR, wagaC = 0;

    cout << "Podaj wage aktualna: " << endl;
    cin >> wagaA;
    cout << "Podaj wage docelowa: " << endl;
    cin >> wagaD;

    cout << "[Dzien: " << dzien << "] Waga: " << wagaA  << " kg." << endl;

    while( wagaA > wagaD ) {
        dzien++;

        wagaT = wagaA;

        cout << "Podaj wage aktualna: " << endl;
        cin >> wagaA;

        wagaR = (wagaA - wagaT);
        wagaC = (wagaA - wagaD);

        cout << "[Dzien: " << dzien << "] Waga: " << wagaA << " kg, Zmiana: " << wagaR << " kg, do celu pozostalo: " << wagaC << " kg." << endl;
    }

    return 0;
}