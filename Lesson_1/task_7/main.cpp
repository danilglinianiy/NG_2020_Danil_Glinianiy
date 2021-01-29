#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cout << "Enter number please:"<< endl;
    cin >> a;
    do{
       cout << b << ",";
       ++b;
    }while( a > b );
    cout << a;

    return 0;
}
