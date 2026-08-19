#include <iostream>
#include <cstdlib>
using namespace std;

int liczby[10];

int minimalna(int p[]) {
	int najmniejsza = p[0];
	for (int i = 0; i < 10; i++) {
		if (p[i] < najmniejsza) {
			najmniejsza = p[i];
		} //dajemy przykladowo pierwszy wyraz ciagu jakoi najmneijsza i potem szukamy mniejszej , jak sie znajdzie to najmniejsza wartosc sie zmienia az do skutku
	}
	return najmniejsza;
}

int maksymalna(int p[]) {
	int najwieksza = p[0];
	for (int i = 0; i < 10; i++) {
		if (p[i] > najwieksza) {
			najwieksza = p[i];
		}
	}
	return najwieksza;
}

int main() {



	cout << "podaj liczby z tablic\n";
	for (int i = 0; i < 10; i++) {
		cout << "podaj " << i + 1 << " liczbe ";
		cin >> liczby[i];
		system("cls");
		cout << "podaj liczby z tablic\n";
	}


	cout << "oto twoje liczby:\n";
	for (int i = 0; i < 10; i++) {
		cout << liczby[i] << " , ";

	}

	cout << "\nnajmniejsza liczba to: " << minimalna(liczby) << endl;
	cout << "najwieksza liczba to: " << maksymalna(liczby) << endl;




	return 0;
}