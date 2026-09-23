// CodeLock.h
#pragma once

#include "Lock.h"
#include <string>

class CodeLock : public Lock { // what does public do here? we'll talk about it later in the class...
private:
    std::string code;
public:
    CodeLock(std::string secretCode);
    bool tryCode(std::string guess);
};