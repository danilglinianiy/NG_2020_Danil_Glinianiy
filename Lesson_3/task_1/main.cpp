#include <iostream>

using namespace std;

int main()
{
    char str[1000];
    unsigned int word = 0;
    unsigned int i = 1;
    bool condition1 = false, condition2 = false;
    cout << "Enter string: ";
    cin.getline(str,1000);


    while(str[i] !='\0'){
        condition1 = ((str[i] >= 'A') && (str[i]<='Z')) || ((str[i]>='a') && (str[i]<='z'));
        condition2 = !(((str[i+1] >= 'A') && (str[i+1]<='Z')) || ((str[i+1]>='a') && (str[i+1]<='z')) );
        if ((condition1) && (condition2))
            word++;
        i++;
    }
    cout<<"Result: "<<word<<endl;

}
