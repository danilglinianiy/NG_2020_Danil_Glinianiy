#include <iostream>

using namespace std;

void square(int size,int tmp)
{
    tmp = tmp-1;
    cout <<" ";
    for (int i = 0; i < size; ++i)
        cout << "*";
    cout << '\n';
    if (tmp > 0)
        square(size,tmp);
}
void square(int size){
    int tmp = size;
    square(size,tmp);
}

void triangle1(int size,int tmp)
{
    cout <<" ";
    for (int i = 0; i < tmp; ++i)
        cout << "*";
    cout << '\n';
    tmp = tmp+1;
    if (!(tmp > size))
        triangle1(size,tmp);
}
void triangle1(int size){
    int tmp = 1;
    triangle1(size,tmp);
}

void triangle2(int size,int tmp)
{
    cout <<" ";

    for ( int j = 0; j < size - tmp; j++){
        cout << " ";
    }
    for ( int j = 0; j < tmp; j++ ){
        cout << "*";
    }
    cout << endl;
    tmp = tmp + 1;
    if (!(tmp > size))
        triangle2(size,tmp);
}
void triangle2(int size){
    int tmp = 1;
    triangle2(size,tmp);
}


void triangle3(int size)
{
    cout <<" ";
    for (int i = 0; i < size; ++i)
        cout << "*";
    cout << '\n';

    if (size > 0)
        triangle3(size-1);
}

void triangle4(int size,int tmp)
{
    cout <<" ";

    for ( int j = 0; j < size - tmp; j++){
        cout << " ";
    }
    for ( int j = 0; j < tmp; j++ ){
        cout << "*";
    }
    cout << endl;
    tmp = tmp-1;
    if (tmp > 0)
        triangle4(size,tmp);
}
void triangle4(int size){
    int tmp = size;
    triangle4(size,tmp);
}


int main()
{
    int size = 0;
    cout << " Enter size: ";
    cin >> size;
    cout << endl;
    square(size);
    cout << "\n";
    triangle1(size);
    cout << "\n";
    triangle2(size);

    cout << "\n";
    triangle3(size);
    triangle4(size);
    return 0;
}
