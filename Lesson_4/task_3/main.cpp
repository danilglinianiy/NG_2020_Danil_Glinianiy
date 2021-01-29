#include <iostream>

using namespace std;



void getStr(char *str){
    cout << "Enter string: ";
    cin.getline(str,1000);
}

int wordCount(char *str){

    unsigned int word = 0;
    bool condition1 = false, condition2 = false;
    for(unsigned int i = 1;  str[i] !='\0'; i++){
        condition1 = ((str[i] >= 'A') && (str[i]<='Z')) || ((str[i]>='a') && (str[i]<='z'));
        condition2 = !(((str[i+1] >= 'A') && (str[i+1]<='Z')) || ((str[i+1]>='a') && (str[i+1]<='z')) );
        if ((condition1) && (condition2))
            word++;
    }
    return word;
}

void wordPrint(int word){
     cout<<"Result: "<<word<<endl;
}

int main()
{
   char str[1000];
   getStr(str);
   wordPrint(wordCount(str));
}
