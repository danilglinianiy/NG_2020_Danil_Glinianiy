#include <iostream>

using namespace std;

void resetBalance(double *cards)
{
    for (int cardNumber = 0; cardNumber < 10; cardNumber++){
        cards[cardNumber] = 0;
    }
}

char getCard()
{
    int current = 0;
    do{
        cout <<"Enter the card number: ";
        cin >> current;
    }while( current < 1 || current > 10 );
    return current;
}

void cardRefill( double *cards,int current)
{
    double replenishment = 0;
    current = current - 1;
    cout << "How much to top up the card balance? ";

    cin >> replenishment;
    cards[current] = cards[current] + replenishment;

}

void showBalance(double *cards)
{
    double Sum = 0;
    for (int cardNumber = 0; cardNumber < 10; cardNumber++){
        cout << cards[cardNumber] << " ";
        Sum += cards[cardNumber];
    }
    cout << endl;
    cout << "In total on all cards: " << Sum << endl;
}


void bank()
{
    double cards[10];
    resetBalance(cards);
    do{
        cardRefill(cards,getCard());
        showBalance(cards);
    }while(true);
}


int main()
{
    bank();
    return 0;
}
