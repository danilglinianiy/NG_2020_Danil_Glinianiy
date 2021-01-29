#include <iostream>

using namespace std;

int main()
{
    int stars[5];
    int Tmp = 0;
    int Max = 0;

    for (int starNum = 0; starNum < 5; starNum++){
        stars[starNum] = 0;

        cout << "Stars in column " << starNum +1 << ":";
        cin >> stars[starNum];

        if (stars[Tmp] < stars[starNum])
            Max = starNum;
    }
    while (stars[Max] > Tmp){

        for (unsigned char starNum = 0; starNum < 5; starNum++){

            if (stars[starNum] > Tmp){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        Tmp+=1;
        cout << endl;
    }
    return 0;
}


