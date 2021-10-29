#include <iostream>

using namespace std;

int main() {
    int l, c, arp, arnp, sum, i;

    arp = 0;
    arnp = 0;
    sum = 0;
    i = 0;
    l = 0;

    cin >> i;

    while(i < 0) {
        cin >> i;
    }

    while (i > 0) {
        l++;

        c = i % 10;
        sum += c;

        if (c % 2 == 0) {
            arp += c;
        } else {
            arnp += c;
        }

        i = i / 10;
        cout << i;
    }

    arp = arp / (l / 2);
    if (l % 2 != 0) {
        arnp = arnp / ((l / 2) + 1);
    } else {
        arnp = arnp / (l / 2);
    }

    cout << "sum: " << sum << endl;
    cout << "arp: " << arp << endl;
    cout << "arnp: " << arnp << endl;

    return 0;
}