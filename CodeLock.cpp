// CodeLock.cpp
#include "CodeLock.h"

CodeLock::CodeLock(std::string secretCode)
    : Lock(), code(secretCode) {}

bool CodeLock::tryCode(std::string guess) {
    if (guess != code) {
        return false;
    }
    return unlock();
}