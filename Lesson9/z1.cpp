#include <iostream>

using namespace std;

int main() {
    char napis[20] = "";
    int length = 0;
    bool flag = true;

    cin.getline(napis, 20);

    for(int i = 0; i < 20; i++) {
        if(int(napis[i]) == 0) break;

        length++;
    }

    for(int i = 0; i < (length / 2); i++) {
        if (napis[i] != napis[length - i - 1]) {
            flag = false;
            break;
        }
    }

    if (!flag) {
        cout << "nie";
    }
    else {
        cout << "palindrom";
    }

    return 0;
}