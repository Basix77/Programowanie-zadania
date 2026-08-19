

#include <iostream>
using namespace std;

class Prostokat {
public:
    int dlugosc;
    int szerokosc;

    ////konstruktor domyslny
    Prostokat() {
        dlugosc = 0;
        szerokosc = 0;
    }
    
  //konstruktor parametryczny
    Prostokat(int d, int s) {
        dlugosc = d;
        szerokosc = s;
    }

    void pole() {
        cout << "Pole prostokata: " << (dlugosc * szerokosc) << endl;

    }
    void obwod() {
        cout << "Obwod prostokata: " << (2 * dlugosc + 2 * szerokosc) << endl << endl;
    }

};


int main()
{
    Prostokat p1,p2,p3,p4,p5;

    p1.dlugosc = 5;
    p1.szerokosc = 8;

    p1.pole();
    p1.obwod();

     
        p2.dlugosc = 10;
        p2.szerokosc = 30;

        p2.pole();
        p2.obwod();


    p3.dlugosc = 15;
    p3.szerokosc = 3;

    p3.pole();
    p3.obwod();


        p4.dlugosc = 7;
        p4.szerokosc = 3;

        p4.pole();
        p4.obwod();


    p5.dlugosc = 2;
    p5.szerokosc = 3;

    p5.pole();
    p5.obwod();
}
