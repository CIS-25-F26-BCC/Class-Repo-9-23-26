#include "KeyLock.h"

KeyLock::KeyLock(std::string keyId)
    : Lock(), requiredId(keyId) {}

bool KeyLock::tryKey(std::string keyId) {
    if (keyId != requiredId) {
        return false;
    }
    return unlock();
}