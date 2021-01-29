#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0, c=0;

    cout << "Vvedite pervoe chislo: ";
    cin >> a;
    cout << "Vvedite vtoroe chislo: ";
    cin >> b;

    do{

       cout << "\nVedite deistvie: ";
       cin >> c;

    }while(c < 1 || c > 4);
    cout << "Resultat: ";
    switch(c){

        case 1: cout << a + b;
        break;

        case 2: cout << a - b;
        break;

        case 3: cout << a * b;
        break;

        case 4: cout << a / b;
        break;
    }


    return 0;
}
