#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int length, minutes;
    float hours, kph;

    cin >> length >> minutes;
    hours = float(minutes);
    hours = hours / 60;
    kph = length / hours;

    cout << "Dystans: " << length << "km" << endl;
    cout << "Czas przebycia: " << hours << "h" << endl;
    cout << "KPH: " << kph << endl; 

    return 0;
}