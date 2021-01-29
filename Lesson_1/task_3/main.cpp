#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d;
    cout << "Skolko oreshkov nuzhno belochke:";
    cin >> a;

    cout << "Skolko oreshkov v odnoy shishke:";
    cin >> b;

    cout << "Skolko shishek bylo sobrano:";
    cin >> c;

     d = b * c;

    if ( d >= a) {
      cout << "YES";
    }

    if ( d < a) {
      cout << "NO";
    }
    return 0;
}
