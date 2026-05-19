#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

enum Status {
    APPROVED,
    DECLINED,
    FLAGGED
};

struct Transaction {
    std::string transactionId;
    std::string cardNumber;
    double amount;
    std::string merchantId;
    std::string timestamp;
    Status status;
};


#endif