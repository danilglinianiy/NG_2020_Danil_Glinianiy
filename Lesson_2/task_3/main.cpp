#include <iostream>

using namespace std;

int main()
{   int maxStr = 0;
    int lengthArr = 20;
    int lengthStr[lengthArr];



    for (int numberStr = 0; numberStr < lengthArr; numberStr++){


        do{
            cout << "Enter number: ";
            cin >> lengthStr[numberStr];
        }while(lengthStr[numberStr] < 0);


        if (lengthStr[numberStr] == 0){
            lengthArr = numberStr;
            break;
        }


        if (maxStr < lengthStr[numberStr]){
            maxStr = lengthStr[numberStr];
        }

    }


    for(int numberStr = 0; numberStr < lengthArr; numberStr++){
        for(int Space = 0;Space <=((maxStr- lengthStr[numberStr] + 1)/2 ); Space++ ){
            cout << " ";
        }
        for (int picture = 0; picture < lengthStr[numberStr]; picture++){

            cout << "*";
        }
        cout << endl;

    }
    return 0;
}
