

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;


int main()
{
    int n;
    int maxi;
    int mini;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;

    int* tab = new int[n];
    srand(time(0));
    
    for (int i = 0; i < n;i++) {
        tab[i] = rand() % 100 +1;
    }

    for (int i = 0; i < n;i++) {
        cout<<tab[i]<<endl;
    }


    mini = tab[0];
    maxi = tab[0];
    for (int j = 0; j < n; j++) {
        
        if (tab[j] > maxi) {
            maxi = tab[j];
        }
        if (tab[j] < mini) {
            mini = tab[j];
        }
    }

    cout << "max: " << maxi << endl;
    cout << "min: " << mini << endl;


    delete[] tab;
    return 0;


}

