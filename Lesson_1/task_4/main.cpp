#include <iostream>

using namespace std;

int main()
{
    int zp;
    cout << "Kakya u tebia zarplata:";
    cin >> zp;

    if ( zp > 999 )
    {
        if( zp > 999999 ){
          cout << "Ti milioner, no ti molodec!";
        }
        if( zp < 1000000 ){
            cout <<  "Tak derzhat, no ti molodec!";
        }
    }
    if( zp < 1000 )
    {
        cout << "Rabotai bolshe, no ti molodec!";
    }
    return 0;
}
