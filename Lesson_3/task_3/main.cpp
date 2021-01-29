#include <iostream>

using namespace std;

int main()
{
    char strn[100];

    bool condition = false;
    cout << "Enter string: "<<endl;
    cin.getline(strn, 100);


    cout<<"Result: "<<endl;
    for(unsigned int i = 0;  strn[i] != '\0'; i++){
        condition = (strn[i]>='a') && (strn[i]<='z');

        if (condition){
            strn[i] -=32;
        }
        cout << strn[i];
    }
}
