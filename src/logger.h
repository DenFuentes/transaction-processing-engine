//implement logging idea to log all transactions to logs/transactions.log
//Every time a transaction gets processed — approved, declined, or flagged — write it to a file so there's a permanent record

#ifndef LOGGER_H
#define LOGGER_H

void logTransaction(const Transaction& transaction);

#endif