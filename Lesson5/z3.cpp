/*
    Napisać program do wydawania reszty, tj. pobierający od użytkownika kwotę do zapłaty i kwotę przekazaną kasjerowi i informujący jakich nominałów i w jakiej ilości należy użyć alby wydać resztę przy pomocy najmniejszej liczby banknotów i monet.
*/

#include <iostream>

using namespace std;

int main() {
    float kdz, kp, kdw;
    int pincset = 0, dwiestuwki = 0, stuwka = 0, piecdyszek = 0, dyszka = 0, pinc = 0, dwa = 0, jeden = 0, pisiontg = 0, dwadziesciag = 0, pincg = 0, dwag = 0, jedeng = 0;

    cin >> kdz >> kp;
    
    kdw = kp - kdz;

    while(kdw > 0.0099) {
        pincset = kdw / 500;
        kdw -= pincset * 500;
        dwiestuwki = kdw / 200;
        kdw -= dwiestuwki * 200;
        stuwka = kdw / 100;
        kdw -= stuwka * 100;
        piecdyszek = kdw / 50;
        kdw -= piecdyszek * 50;
        dyszka = kdw / 10;
        kdw -= dyszka * 10;
        pinc = kdw / 5;
        kdw -= pinc * 5;
        dwa = kdw / 2;
        kdw -= dwa * 2;
        jeden = kdw / 1;
        kdw -= jeden;
        pisiontg = kdw / 0.5;
        kdw -= pisiontg * 0.5;
        dwadziesciag = kdw / 0.2;
        kdw -= dwadziesciag * 0.2;
        pincg = kdw / 0.05;
        kdw -= pincg * 0.05;
        dwag = kdw / 0.02;
        kdw -= dwag * 0.02;
        jedeng = kdw / 0.01;
        kdw -= jedeng * 0.01;

        //cout << kdw << endl;
    }

if(pincset > 0) { 
 cout << "pincset:" << pincset << endl;
}
if(dwiestuwki > 0) { 
 cout << "dwiestuwki:" << dwiestuwki << endl;
}
if(stuwka > 0) { 
 cout << "stuwka:" << stuwka << endl;
}
if(piecdyszek > 0) { 
 cout << "piecdyszek:" << piecdyszek << endl;
}
if(dyszka > 0) { 
 cout << "dyszka:" << dyszka << endl;
}
if(pinc > 0) { 
 cout << "pinc:" << pinc << endl;
}
if(dwa > 0) { 
 cout << "dwa:" << dwa << endl;
}
if(jeden > 0) { 
 cout << "jeden:" << jeden << endl;
}
if(pisiontg > 0) { 
 cout << "pisiontg:" << pisiontg << endl;
}
if(dwadziesciag > 0) { 
 cout << "dwadziesciag:" << dwadziesciag << endl;
}
if(pincg > 0) { 
 cout << "pincg:" << pincg << endl;
}
if(dwag > 0) { 
 cout << "dwag:" << dwag << endl;
}
if(jedeng > 0) { 
 cout << "jedeng:" << jedeng << endl;
}

    return 0;
}