#include <iostream>

using namespace std;

int main()
{
    char str[1000];

    int word = 0, max = 0,tmp = -1;
    bool condition = false,print = false;


    cout << "Enter string: "<<endl;

    cin.getline(str,1000,'\n');


    do{
        tmp++;
        condition = ((str[tmp] >= 'A') && (str[tmp]<='Z')) || ((str[tmp]>='a') && (str[tmp]<='z'));

        if (condition){
            word++;

        }else {
            if(word > max){

                max = word;

            }
            word = 0;

        }
    }while(str[tmp] != '\0');


    cout<<"Result: ";
    tmp = 0;
    for(int i = 0; str[i]!='\0';i++){

        if(!print){
            condition = ((str[i] >= 'A') && (str[i]<='Z')) || ((str[i]>='a') && (str[i]<='z'));
            if (condition){
                tmp++;
                if(tmp == max){
                    print = true;
                    i =i - max;
                }
            }else{
                tmp = 0;
            }
        }else{

            tmp--;
            cout<<str[i];
            if (tmp == 0){
                print = false;
                cout<<' ';
            }
        }
    }
}
