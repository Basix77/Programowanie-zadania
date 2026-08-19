#include <iostream>
#include <string>
using namespace std;

class Platnosc {
public:
    virtual void zaplac(float kwota, string metoda)=0;

};

class platnoscKarta : public Platnosc {
public:

   
    void zaplac(float kwota, string metoda) override {
        cout << "podaj kwote do zaplaty" << endl;
        cin >> kwota;
        cout << "podaj numer karty, bez spacji" << endl;
        cin >> metoda;
        cout << "Zaplacono " << kwota << "zl ";
        cout << "karta VISA " << metoda << endl;
    }
};


class platnoscBLIK : public Platnosc {
public:


    void zaplac(float kwota, string metoda) override {
        cout << "podaj kwote do zaplaty" << endl;
        cin >> kwota;
        cout << "podaj kod BLIK" << endl;
        cin >> metoda;
        cout << "Zaplacono " << kwota << "zl ";
        cout << " BLIK" << metoda << endl;
    }
};


class platnoscKrypto : public Platnosc {
public:


    void zaplac(float kwota, string metoda) override { 
        cout << "podaj wybrana kryptowalute" << endl;
        cin >> metoda;
        cout << "podaj kwote do zaplaty" << endl;
        cin >> kwota;
        cout << "Zaplacono " << kwota << " ";
        cout << metoda << endl;
    }
};




int main()
{
    
    int jaka;
    cout << "Jaka metoda chcesz zaplacic?" << endl;
    cout << "1. karta VISA\n2. BLIK\n3. Kryptowaluta\n4. cofnij transakcje\n";
    cin >> jaka;

    while (true) {
        if (jaka == 1) {
            platnoscKarta v;
            v.zaplac(10, "a");
            break;

        }
        else if (jaka == 2) {

            platnoscBLIK b;
            b.zaplac(10, "a");
            break;
        }

        else if (jaka == 3) {

            platnoscKrypto k;
            k.zaplac(10, "a");
            break;
        }
        else if (jaka == 4) {
            break;
        }


        else {
            cout << "wybrales nieistniejaca opcje";
        }
    }
    return 0;
    // nie  udalo mi sie uzyc wektorow

}

