#include <iostream>

using namespace std;

int main()
{
    double cards[10];
    double replenishment = 0;
    int current = 0;
    int Sum = 0;

    for (int cardNum = 0; cardNum < 10; cardNum++){
        cards[cardNum] = 0;
    }
    do{
        do{
            cout <<"Enter card number: ";
            cin >> current;
        }while( current < 1 || current > 10 );
        current = current - 1;
        cout << "How much do you want to top up the balance: ";
        cin >> replenishment;
        cards[current] = cards[current] + replenishment;
        Sum += replenishment;
        for (int cardNum = 0; cardNum < 10; cardNum++){
            cout << cards[cardNum] << " ";
        }
        cout << endl;
        cout << "Sum all cards: " << Sum << endl;
    }while(true);
    return 0;
}
