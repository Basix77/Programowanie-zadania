
//U¿ytkownik ma 3 próby na poprawne zalogowanie siê.
//• has³o to np.„tajne123”
//• po 3 b³êdnych próbach program wypisuje komunikat : „konto zablokowane” 1. while podanehaslo!=haslo () 2. for i=0; proba>3 ; i++ 
//Rozszerzenie : has³o wpisywane jako string(czyli #include <string>)
//Opcjonalne podpowiedzi :
//• np.„has³o ma 8 znaków”
//Wymagania : pêtla while, instrukcja if, zmienne string, int.
#include <iostream>
#include <string>

using namespace std;


string haslo = "tajne123";
string podanehaslo;
int proba;

int main()
//{
//    for (int proba = 0; proba < 3; proba++) {
//        if (proba = 1) {
//            cout << "\n===== ZALOLGUJ SIE - Masz 3 proby podania hasla =====" << endl;
//            cout << "\nLogin: Admin" << endl << "Haslo: ";
//            cin >> podanehaslo;
//        }
//        if (podanehaslo == haslo) {
//            break;
//        }
//        if (proba = 2) {
//            cout << "\n===== Masz jeszcze 2 proby, po czym twoje konto zostanie zablokowane =====" << endl << "===== Podpowiedz: haslo musi miec 8 znakow =====" << endl;
//            cout << "\nLogin: Admin" << endl << "Haslo: ";
//            cin >> podanehaslo;
//
//        }
//        if (podanehaslo == haslo) {
//            break;
//        }
//        if (proba = 3) {
//            cout << "\n===== To twoja ostatnia proba, po czym Twoje konto zostanie zablokowane. Wpisuj madrze. =====" << endl << "===== Podpowiedz: haslo musi miec 8 znakow =====" << endl;
//            cout << "\nLogin: Admin" << endl << "Haslo: ";
//            cin >> podanehaslo;
//        }
//        if (podanehaslo == haslo) {
//            break;
//        }
//   
//        }
//    if (podanehaslo == haslo) {
//        cout << "Brawo! Udalo Ci sie zalogowac.";
//    }
//    else {
//        cout << "konto zablokowane";
//    }
//        return 0;
//
//}
{
	while ((podanehaslo != haslo) && (proba < 3)) {
		proba++;
		if (proba == 1) {
			cout << "\n===== ZALOLGUJ SIE - Masz 3 proby podania hasla =====" << endl;
			cout << "\nLogin: Admin" << endl << "Haslo: ";
			cin >> podanehaslo;
			
			
		}
		if (podanehaslo == haslo) {
			break;
		}
		if (proba == 2) {
			cout << "\n===== Masz jeszcze 2 proby, po czym twoje konto zostanie zablokowane =====" << endl << "===== PODPOWIEDZ: Haslo musi miec 8 znakow =====" << endl;
			cout << "\nLogin: Admin" << endl << "Haslo: ";
			cin >> podanehaslo;
			

		}
		if (podanehaslo == haslo) {
			break;
		}
		if (proba == 3) {
			cout << "\n===== To twoja ostatnia proba, po czym Twoje konto zostanie zablokowane. Wpisuj madrze. =====" << endl << "===== PODPOWIEDZ: Haslo musi miec 8 znakow =====" << endl;
			cout << "\nLogin: Admin" << endl << "Haslo: ";
			cin >> podanehaslo;
			
		}
		


	}
	

	if (podanehaslo == haslo) {
		cout << "\nBrawo! Udalo Ci sie zalogowac.";
	}
	else {
		cout << "\nTwoje konto zostalo zablokowane";
	}

	return 0;

	}

