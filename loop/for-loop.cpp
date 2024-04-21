#include<iostream>
using namespace std;

int main(){
    // variable define
    int time;

    cout << "How many time you want to print your name: ";
    cin >> time;
    
    // for loop
    for( int i = 1; i <= time; i = i + 1)
    {
        cout << "Koushik " << i << endl;
    }
    return 0;
}