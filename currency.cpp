#include <string>
#include <iostream>
#include "currency.h"
using namespace std;

/******* WALLET METHODS *******/

Wallet::Wallet() {
    Wallet::loadData();
}



void Wallet::loadData(){
    string name; 
    while(1) { 
        double exch_rate, amount;
        //FIXME - it should read data from a file
        cout << "Enter the data of new currency or type 0 to finish.\n";
        cout << "name exch_rate amount:\t";
        cin >> name;
        if (name == "0")
            break;
        cin >> exch_rate >> amount;
        
        
        addCurrency(name, exch_rate, amount);

     }
}

void Wallet::addCurrency(string n, double e, double a){
    wallet.push_back(new Currency(n, e, a));
}

void Wallet::list() {
    int n, i;
    n = wallet.size();
    for (int i=0; i<n; i++)
    wallet[i]->toString();
}



/******* CURRENCY METHODS *******/

Currency::Currency(string n, double e, double a) {
    name = n;
    exchange_rate = e;
    amount = a;
}

void Currency::toString() {
    // FIXME - print it out in more elegant way, round the data
    cout << name << " " << exchange_rate << " " << amount << endl;
}
