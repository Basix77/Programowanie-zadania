

#include <iostream>
using namespace std;

//Napisz program, który:
//• Wczytuje od u¿ytkownika cenê netto oraz stawkê VAT w procentach.
//• Oblicza cenê brutto i wyœwietla wynik.
//• Powtarza dzia³anie dopóki cena netto > 0.
//Wymagania: Funkcja double cenaZVat(double netto, double vat), pêtla while, instrukcja if.


double netto;
double vat;
int i;
double cenaZVat(double netto, double vat){
return netto + (netto * vat *0.01);

}
int main()
{
    cout << "podaj cene netto ";
    cin >> netto;
    cout << "podaj ile procent ma stawka vat ";
    cin >> vat;
    cout << "cena brutto wynosi: " << cenaZVat(netto, vat) << endl;

    while (netto > 0) {
        i++;
            if (i > 0) {
                cout << "podaj cene netto ";
                cin >> netto;
                cout << "podaj ile procent ma stawka vat ";
                cin >> vat;
                cout << "cena brutto wynosi: " << cenaZVat(netto, vat) << endl;
            }

        
        
        }
    cout << "koniec programu";
    }


