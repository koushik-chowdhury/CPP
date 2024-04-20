#include<iostream>
using namespace std;

int main(){
    
    // variable define
    int price;

    cout << "Enter you Budget (min: 1lakh): ";
    cin >> price;

    // Condition
    if (price > 100000)
    {
        int number = price / 100000;
        int remain = price % 100000;

        cout << "You can buy " << number << " Car's and save " << remain << " money";
    }
    else
    {
        cout << "You don't have enough money for buying car";

    }
}