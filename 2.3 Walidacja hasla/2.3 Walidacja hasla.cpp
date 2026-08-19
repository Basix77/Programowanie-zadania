
/*
• Wczytuje od u¿ytkownika has³o (jako string).
• Sprawdza, czy has³o:
• ma co najmniej 8 znaków, zawiera co najmniej jedn¹ du¿¹ literê (isupper()), zawiera co najmniej jedn¹ ma³¹ literê (islower()),
zawiera co najmniej jedn¹ cyfrê (isdigit()).
• Wyœwietla komunikat czy has³o jest poprawne lub nie.
• Program pozwala u¿ytkownikowi próbowaæ ponownie, dopóki nie wpisze q lub Q zamiast has³a.
Wymagania: pêtla while, instrukcje warunkowe if, przekazywanie parametru przez referencjê (opcjonalnie), funkcje biblioteczne
isupper, islower, isdigit.
*/
#include <iostream>
#include <string>	
#include <cctype>
using namespace std;

string haslo;

bool sprawdzenie(const string& p) {
	bool duza = false;
	bool mala = false;
	bool cyfra = false;
	bool iloscznakow = false;

	if (p.size() >= 8) {
		iloscznakow = true;
	}

	//for (int i = 0; i < haslo.length(); i++) {
		//char c = haslo[i];
	for (char c : p) {



		if (isupper(c)) {
			duza = true;
		}

		if (islower(c)) {
			mala = true;
		}

		if (isdigit(c)) {
			cyfra = true;
		}
	}
	return mala && duza && cyfra && iloscznakow;
}

int main() {
	while ((haslo != "q") && (haslo != "Q")) {
		cout << "\nPodaj haslo (lub wpisz q aby wyjsc): \n";
		cin >> haslo;

		if (sprawdzenie(haslo) == true) {
			cout << "\nHaslo wpisane prawidlowo\n";
		}
		else {
			cout << "\nNieprawilowe haslo: musi ono zawierac minimum 8 znakow, 1 mala litere, 1 wielka litere, 1 cyfre\n";
		}
	}
	return 0;
}