/*Napisz program, który:
• Wczytuje trzy liczby ca³kowite.
• Wyznacza najwiêksz¹ i wypisuje wynik.
• Pozwala powtarzaæ dzia³anie a¿ do wpisania q lub Q.
Wymagania: Funkcja int max3(int a, int b, int c), pêtla do...while, instrukcja if...else.*/

#include <iostream>
using namespace std;

int a;
int b;
int c;
char koniec;

int max3(int a, int b, int c) {
	if ((a > b) && (a > c)) {
		return a;
	}
	else if ((b > a) && (b > c)) {
		return b;
	}
	else if ((c > a) && (c > b)) {
		return c;
	}
	
}
int main()
{
	do {
		cout << "Podaj 3 liczby calkowite" << endl;
		cout << "pierwsza: ";
		cin >> a;
		cout << "druga: ";
		cin >> b;
		cout << "trzecia: ";
		cin >> c;
		cout << max3(a, b, c) << " jest najwieksza z trzech podanych liczb" << endl << endl;
		cout << "Napisz q lub Q jesli chcesz zakonczyc program,\nnapisz cokolwiek innego, jesli chcesz kontynuowac\n\n";
		cin >> koniec;
	} while ((koniec != 'q') && (koniec != 'Q'));
	return 0;
}
