//implement the functionality of logger.h

#include "logger.h"
#include "transaction.h"
#include <fstream>
#include <iostream>

using namespace std;

void logTransaction(const Transaction& transaction){
    ofstream file;
    file.open("logs/transactions.log", ios::app);
    if(file.is_open()){
        file << "Transaction ID: " << transaction.transactionId << endl;
        file << "Card Number: **** **** **** " << transaction.cardNumber.substr(12) << endl;
        file << "Amount: $" << transaction.amount << endl;
        file << "Merchant ID: " << transaction.merchantId << endl;
        file << "Timestamp: " << transaction.timestamp << endl;
        file << "Status: " << (transaction.status == APPROVED ? "APPROVED" : (transaction.status == DECLINED ? "DECLINED" : "FLAGGED")) << endl;
        file << "-----------------------------" << endl;
        file.close();
    } else {
        cerr << "Unable to open log file!" << endl;
    }
}