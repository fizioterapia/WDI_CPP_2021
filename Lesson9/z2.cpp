#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char napis[20] = "";
    const int K = 2;
    int length = 0;

    do {
        cin.getline(napis, 200);
        length = strlen(napis);

        for(int i = 0; i < length; i++) {
            int litera = int(napis[i]);
            if (litera == ' ') {
                continue;
            }

            if (litera >= 'A' && litera <= 'Z') {
                if (litera + K > 'Z') {
                    litera = 'A' + ((litera + K) - 'Z');

                    napis[i] = litera;
                } else {
                    napis[i] = litera + K;    
                }
            } else {
                if (litera + K > 'z') {
                    litera = 'a' + ((litera + K) - 'z');

                    napis[i] = litera;
                } else {
                    napis[i] = litera + K;    
                }
            }

        }

        cout << napis << endl;
    } while (length > 0);

    return 0;
}