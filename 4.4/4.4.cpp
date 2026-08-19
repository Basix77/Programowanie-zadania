#include <iostream>
#include <string>
#include <sstream> // do konwersji adresów na string
using namespace std;
int main() {
	string a = "abc";
	string b = "1234";
	string* c = &b; //wskaznik c przechowuje adres zmiennej b
	ostringstream ossA, ossC;
	ossA << &a; //ossa przechowuje adres a
	ossC << &c; //ossc przechowuje adres wskaznika c ktory wskazuje na b
	string x = ossA.str(); //abc
	string y = ossC.str(); //1234


	cout << &a << endl;
	cout << &c << endl;


	string login, haslo;
	int proby = 0;
	const int maxProb = 3;
	while (proby < maxProb) {
		cout << "Podaj login: ";
		cin >> login;
		cout << "Podaj haslo: ";
		cin >> haslo;
		if (login == x && haslo == y) {
			cout << "Zalogowano poprawnie!\n";
			break;
		}
		else {
			proby++;
			cout << "Bledne dane. Pozostalo prob: "
				<< (maxProb - proby) << "\n";
		}
	}
	if (proby == maxProb) {
		cout << "Konto zablokowane po 3 nieudanych probach!\n";
	}
}