
#include <iostream>
using namespace std;

void zamien(int& a, int &b) {

	int n = a;

	a = b;
	b = n;
}


int main()
{
	int a;
	int b;

	cout << "podaj a: "; cin >> a;
	cout << "podaj b: "; cin >> b;

	cout << "a:" << a << endl;
	cout << "b:" << b << endl << endl;

	zamien(a, b);
	cout << "po zamianie: " << endl;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

}

