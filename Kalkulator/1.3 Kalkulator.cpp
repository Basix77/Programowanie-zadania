#include <iostream>
#include <cmath>
using namespace std;

//Napisz kalkulator, który:
//• wczytuje dwie liczby zmiennoprzecinkowe;   ZROBIONE
//• Pyta o dzia³anie(+-*/ %) — znak dzia³ania jako char; ZROBIONE 
//• zabezpiecza przed dzieleniem przez 0; ZROBIONE
//• powtarza dzia³anie a¿ u¿ytkownik wpisze q lub Q;   if (zakoncznie == q || zakonczenie == Q) {break;}
//Wymagane elementy :
//• switch, pêtla while, instrukcja if.

//while getchar!=q || Q, powtyarzaj dzialanie (pytanie o nie?)

float liczba1;
float liczba2;
char wybor;
string koniec;

int main()
{
	while ((koniec != "q") || (koniec != "Q")) {
		cout << "Podaj 2 liczby rzeczywiste:" << endl;
		cout << "liczba 1: ";
		cin >> liczba1;
		cout << "liczba 2: ";
		cin >> liczba2;

		cout << "Wybierz dzialanie : \n+ Dodawanie \n- Odejmowanie \n* Mnozenie \n/ Dzielenie \n% Reszta z dzielenia \n";
		cin >> wybor;

		switch (wybor) {
		case '+':
			cout << "=====Dodajemy=====\n" << "Wynik dodawania: " << (liczba1 + liczba2) << endl << endl;

				break;
		case '-':
			cout << "=====Odejmujemy=====\n" << "Wynik odejmowania: " << (liczba1 - liczba2) << endl << endl;
			
				break;
		case '*':
			cout << "=====Mnozymy=====\n" << "Wynik mnozenia: " << (liczba1 * liczba2) << endl << endl;
			
				break;
		case '/':
			if (liczba2 == 0) {
				cout << "Nie mozna dzielic przez 0!\n\n";
			}
			else {
				cout << "=====Dzielimy=====\n" << "Wynik dzielenia: " << (liczba1 / liczba2) << endl << endl;
			}
				break;
		case '%':
			if (liczba2 == 0) {
				cout << "Nie mozna dzielic przez 0!\n\n";
			}
			else {
				cout << "=====Liczymy reszte z dzielenia=====\n" << "Reszta z dzielenia: " << (fmod(liczba1, liczba2)) << endl << endl;
			}
			
				break;
		default:
			cout << "=====nieznana opcja=====\n";
			
				break;
		}
		cout << "---wpisz q lub Q, aby wyjsc\n---wpisz cokolwiek innego, aby liczyc dalej\n\n";
		cin >> koniec;
		cout << endl;
		if (koniec == "q" || koniec == "Q") {
			break;
		}
		
	} 
	
	}


	
		
	






