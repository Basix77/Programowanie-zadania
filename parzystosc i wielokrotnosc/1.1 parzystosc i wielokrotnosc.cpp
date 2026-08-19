#include <iostream>
#include <windows.h>

using namespace std;

int liczba;
int main()
{
	cout << "Podaj liczbe calkowita: " << endl;
	cin >> liczba;

	if (liczba % 2 == 0)
	{
		cout << "liczba jest podzielna przez 2" << endl;
	}
	else
	{
		cout << "liczba nie jest podzielna przez 2" << endl;
	}


	if (liczba%3==0)
	{
		cout << "liczba jest podzielna przez 3"<< endl;
	}
	else
	{
		cout << "liczba nie jest podzielna przez 3" << endl;
	}
	if ((liczba%2 == 0)&&(liczba%5==0))
	{
		cout << "Liczba jest rownoczesnie podzielna przez 2 i 5" << endl;
	}
	else
	{
		cout << "liczba nie jest rownoczesnie podzielna prze 2 i 5" << endl;
	}


	

	return 0;
}