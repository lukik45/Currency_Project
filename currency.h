#ifndef CURRENCY_H
#define CURRECY_H


#include <string>
#include <vector>
using std::string;

using std::vector;

class Currency {
    protected:
        double exchange_rate;
        double amount;
        string name;

    public:
        Currency(string, double, double);
        void getExchangeRate();
        void setExchangeRate();
        void toString();

};

class Wallet {
    private:
        vector<Currency*> wallet;    // vector to store pointers to all currency
                                    // added to the wallet

    public:
        Wallet();
        void loadData();
        void addCurrency(string n, double e, double a);  // adds currency of given type 
                                        // and name to the wallet
        void list();

        // add coins of a given currency:
        Wallet& operator+(Currency*, double val);
};

























class Transactions {
    private:
        
    public:
        void trade();  // This function to be implemented further

};





class Fiat_Currency : public Currency {
    private:
        int* denominations;
        string country;
};


class Crypto_Currency : public  Currency {
    protected:

};

class Meme_Crypto : public Crypto_Currency {

};

class Serious_Crypto : Crypto_Currency {

};










#endif