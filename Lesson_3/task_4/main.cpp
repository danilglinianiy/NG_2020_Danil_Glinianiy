#include <iostream>


using namespace std;

int main()
{
    int quantity[26];
    bool condition = false;

    cout << "Enter string: "<<endl;

    for(char i = 0; i<26; i++){
        quantity[(int)i] = 0;
    }
    for(char i = getchar();  i!='\n'; i = getchar() ){
        condition= ((i>='a') && (i<='z'))||((i>='A') && (i<='Z'));
        if(condition){

            if ((i>='a') && (i<='z')){
                quantity[i-'a']++;
            }else{
                quantity[i-'A']++;
            }
        }
    }
    for( char j = 1, max = 0; j== 1;){
        j = 0;
        for(char i = 0; i<26;i++)
            if (quantity[(int)i] > quantity[(int)max])
                max = i;
        if (quantity[(int)max] > 0){

            cout << (char)(max+'A')<< " - "<<quantity[(int)max]<<endl;
            quantity[(int)max] = 0;
            j = 1;
        }
    }
}
