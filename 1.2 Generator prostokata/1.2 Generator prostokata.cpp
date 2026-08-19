#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

// wez od uzytkownika szerokosc, wysokosc, znak
// napisz szerokosc*znak
//napisz (<< znak << pusta*szerokosc << znak)\n *wyskosc
// szerokosc * znak

int szerokosc;
int wysokosc;
char znak;
char pusta = ' ';

int main()
{

	cout << "podaj szerokosc prostokata: ";
	cin >> szerokosc;
	cout << "podaj wysokosc prostokata: ";
	cin >> wysokosc;
	cout << "podaj znak rysowania: ";
	cin >> znak;

	for (int i = 0; i < szerokosc; i++) {
		cout << znak << pusta;
	}


	cout << endl;
	for (int j = 1; j < wysokosc; j++) {
		cout << znak;
		for (int k = 3; k < (szerokosc*2); k++) {

			cout << pusta;
		}
		cout << znak << endl;
	}


	for (int i = 0; i < szerokosc; i++) {
		cout << znak << pusta;
	}

	return 0;

}
