#ifndef VALIDATOR_H
#define VALIDATOR_H

#include "transaction.h"
#include <string>


bool validate(const Transaction& t, std::string& reason);

#endif