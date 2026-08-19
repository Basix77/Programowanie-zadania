/*WprowadŸ losowe dane dziennej temperatury z tygodnia : 7 wartoœci.
Napisz program, który :
	• Wczytuje temperatury.
	• Oblicza œredni¹ temperaturê.
	• Policzy, ile dni by³o cieplejszych od œredniej.*/

#include <iostream>
#include <string>
using namespace std;

float temperatura[7];

float srednia(const float s[], int n);

string cieplejsze(const float s[], int n, float k);

int ilosc_cieplejszych(const float s[], int n, float sr);


int main() {

	cout << "podaj temperatury z tygodnia\n";
	for (int i = 0; i < 7;i++) {
		cout << "dzien " << i + 1 << ": ";
		cin >> temperatura[i];

	}

	cout << "srednia temperatur: " << srednia(temperatura, 7) << endl;
	cout << "wieksze od sredniej: " << cieplejsze(temperatura, 7, srednia(temperatura, 7)) << endl;
	cout << "Bylo tyle dni cieplejszych od sredniej: " << ilosc_cieplejszych(temperatura, 7, srednia(temperatura, 7)) << endl;



	return 0;
}






float srednia(const float s[], int n) {

	float suma = 0;

	for (int i = 0; i < n; i++) {
		suma += s[i];
	}
	return (suma / n);
}



string cieplejsze(const float s[], int n, float k) {

	string wieksze;
	for (int i = 0; i < n; i++) {
		if (s[i] > k) {
			wieksze += to_string(s[i]) + " ";
		}
	}
	return wieksze;
}

int ilosc_cieplejszych(const float s[], int n, float sr) {

	int c = 0;
	for (int i = 0; i < n; i++) {

		if (s[i] > sr) {
			c++;
		}
	}
	return c;

}


/*WprowadŸ losowe dane dziennej temperatury z tygodnia : 7 wartoœci.
Napisz program, który :
	• Wczytuje temperatury.
	• Oblicza œredni¹ temperaturê.
	• Policzy, ile dni by³o cieplejszych od œredniej.*/
/*
#include <iostream>
#include <string>
using namespace std;

float temperatura[7];

float srednia(const float s[], int n) {
	float all = 0;

	for (int i = 0;i < n;i++) {
		all += s[i];
	}
	return (all / n);
}

int cieplejsze(const float s[], int n, float sr) {

	int c = 0;
	for (int i = 0; i < n; i++) {

		if (s[i] > sr) {
			c++;
		}
	}
	return c;

}


int main() {

	cout << "Podaj temperatury z ostatniego tygodnia" << endl;
	for (int i = 0; i < 7; i++) {
		cout << "Dzien " << i + 1 << ": ";
		cin >> temperatura[i];
	}



	cout << "Srednia wynosi: " << srednia(temperatura, 7) << endl;
	cout << "Bylo tyle dni cieplejszych od sredniej: " << cieplejsze(temperatura, 7, srednia(temperatura, 7)) << endl;


	return 0;
}*/