#include "validator.h"

bool validate(const Transaction& t, std::string& reason){
    if(t.amount <= 0){
        reason = "Transaction amount must be greater than $0.";
        return false;
    }
    if(t.cardNumber.lenght() != 16){
        reason = "Card Number Invalid! Please provide a valid Card Number for this transaction.";
        return false;
    }
    if(t.merchantId.empty()){
        reason = "Invalid Merchant! Please provide a valid Merchant Id for this transaction.";
        return false;
    }
    if(t.amount >= 50000){
        reason = "Transaction amount must be less than $50,000";
        return false;
    }
    return true;
}