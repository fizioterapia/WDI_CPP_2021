#include <iostream>

using namespace std;

int main() {
    char waluta, walutad;
    float kwota1, kwota2;
    float kursz = 0.235;
    float kursd = 3.95;

    cout << "kwota1" << endl;
    cin >> kwota1;
    cout << "waluta" << endl;
    cin >> waluta;
    cout << "walutad" << endl;
    cin >> walutad;

    while(kwota1 < 0) {
        cout << "kwota1" << endl;
        cin >> kwota1;
    }

    while(waluta == walutad || (waluta != 'd' && waluta != 'D' && waluta != 'z' && waluta != 'Z') && (walutad != 'd' && walutad != 'D' && walutad != 'z' && walutad != 'Z')) {
        cout << "waluta" << endl;
        cin >> waluta;
        cout << "walutad" << endl;
        cin >> walutad;
    }

    if((waluta == 'z' || waluta == 'Z') && (walutad == 'd' || walutad == 'D')) {
        kwota2 = kwota1 / kursd;
        cout << "z to d | " << kwota2;
    } else if ((walutad == 'z' || walutad == 'Z') && (waluta == 'd' || waluta == 'D')) {
        kwota2 = kwota1 / kursz;
        cout << "d to z | " << kwota2;
    }

    return 0;
}