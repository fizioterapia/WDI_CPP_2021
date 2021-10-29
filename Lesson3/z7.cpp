#include <iostream>

using namespace std;

int main() {
        int rok;
    cin >> rok;

    if (rok % 4 == 0 && rok % 100 != 0) {
        cout << "Przestepny";
    } else {
        cout << "zwyczajny";
    }
    
    return 0;
}