#include "transaction.h"
#include "validator.h"
#include <iostream>
using namespace std;


int main() {
    string cardNumber = "1234567890123456";
    string merchant = "Shell";

    Transaction chips = createTransaction(cardNumber, 4.99, merchant);
    string reason;
    bool valid = validate(chips, reason);
    if(!valid){
        cout << "Failed: " << reason << endl;
    } else {
        cout << "Transaction Approved!" << endl;
    }

    return 0;
}