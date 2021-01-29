#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 1; i<=n;i++){
        for(int j = 0; j<=n-i; j++){
            cout << " ";
        }
        for (int j = 0; j<2*i-1; j++){
            cout << "*";
        }
        cout << endl;
    }
    for ( int j = 0; j<=n-1; j++){
        cout << " ";
    }
    cout << "*";
    return 0;
}
