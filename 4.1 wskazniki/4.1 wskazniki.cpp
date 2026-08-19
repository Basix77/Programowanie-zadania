

#include <iostream>

using namespace std;

void proba() {
    int* liczba = new int;
    *liczba = 123;

    cout << "wartosc: " << *liczba << endl;

    delete liczba;

    int n;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;

    int* tab = new int[n];
    for (int i = 0; i < n;i++) {
        tab[i] = i * i;
    }

    cout << "kwadraty liczb: " << endl;
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";

    }


    cout << "\n&tab " << &tab << endl; //adres tablicy???
    cout << "tab " << tab << endl; //adres zerowego
    cout << "&tab[0] " << &tab[0] << endl; //adres zerowego
    cout << "&tab[1]" << &tab[1] << endl; //adres pierwszego
}

int main()
{
    double zmienna = 10.5;
    double* w = &zmienna;
    cout << zmienna << endl;
    

    cout << "dostep przez zmienna: " << endl;
    cout << "  adres zmiennej: " << &zmienna << endl;
    cout << "  wartosc zmiennej: " << zmienna << endl;


    cout << "dostep przez wskaznik: " << endl;
    cout << "  adres wskaznika" << w << endl;
    cout << "  wartosc wskaznika" << *w << endl;
     
    cout << "\n\npo zmianie przez wskaznik\n";
    *w = 15.4;
    cout <<"wartosc zmiennej: " << zmienna << endl;
    cout << "wartosc przez wskaznik: " << *w << endl;


}

