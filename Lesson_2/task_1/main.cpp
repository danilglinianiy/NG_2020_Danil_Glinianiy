#include <iostream>

using namespace std;

int main()
{
    unsigned int nSchool[10];
    unsigned int mySchool = 0;

    for(unsigned int a = 0; a < 10; a++){
        cout << "Enter the number of school: ";
        cin >> nSchool[a];
        }
    cout << "Enter your school number: ";
    cin >> mySchool;

    for(int a = 0; a < 10; a++){
        if (nSchool[a] == mySchool){
            cout << "I know this school!";
        break;
     }else if(a == 9){
           cout << "Oh baby, i don\`t know this school, sorry(";
           }
        }
    return 0;
}
