#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    cout << "Enter size: ";
    cin >> size;
    cout << endl;
    for (int i = 0; i < size;i++){
        for (int j = 0; j < size; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for ( int i = 0; i < size; i++){
        for ( int j = -1; j < i; j++){
            cout<<"*";
        }
        cout << endl;
    }
    cout << endl;

    for ( int i = 1; i <= size; i++){
        for ( int j = 0; j < size - i; j++){
            cout << " ";
        }
        for ( int j = 0; j < i; j++ ){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for ( int i = size; i > 0; i--){
        for ( int j = 0; j < i; j++){
            cout<<"*";
        }
        cout << endl;
    }
    cout << endl;

    for ( int i = size; i >= 0; i--){
        for ( int j = 0; j < size - i; j++){
            cout << " ";
        }
        for ( int j = 0; j <i; j++ ){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
