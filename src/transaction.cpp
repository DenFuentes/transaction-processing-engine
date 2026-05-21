#include "transaction.h"
#include <ctime>


std::string getCurrentTimestamp() {
    time_t now = time(0);
    std::string timestamp = std::ctime(&now);
    return timestamp;
}

std::string generateTransactionId() {
    std::string transactionId = "TXN" + std::to_string(time(0));
    return transactionId;
}

Transaction createTransaction(std::string cardNumber, double amount, std::string merchantId) {
    Transaction transaction;
    transaction.transactionId = generateTransactionId();
    transaction.cardNumber = cardNumber;
    transaction.amount = amount;
    transaction.merchantId = merchantId;
    transaction.timestamp = getCurrentTimestamp();
    transaction.status = APPROVED; // Default status, can be updated later
    return transaction;
}