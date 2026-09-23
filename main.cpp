// main.cpp
#include "CodeLock.h"
#include "KeyLock.h"
#include <iostream>

bool passageIsOpen(const Lock& lock) {
    return lock.isUnlocked();
}

int main() {
    CodeLock cabinetLock("0042");
    KeyLock passageLock("brass-key");
    std::cout << std::boolalpha;
    std::cout << cabinetLock.tryCode("42") << '\n';
    std::cout << cabinetLock.tryCode("0042") << '\n';
    std::cout << cabinetLock.tryCode("0042") << '\n';
    std::cout << passageIsOpen(cabinetLock) << '\n';
    std::cout << passageIsOpen(passageLock) << '\n';
    std::cout << passageLock.tryKey("silver-key") << '\n';
    std::cout << passageLock.tryKey("brass-key") << '\n';
    std::cout << passageLock.tryKey("brass-key") << '\n';
    std::cout << passageIsOpen(passageLock) << '\n';
}