// KeyLock.h
#pragma once
#include "Lock.h"
#include <string>

class KeyLock : public Lock {
private:
    std::string requiredId;
public:
    KeyLock(std::string keyId);
    bool tryKey(std::string keyId);
};