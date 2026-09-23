// Lock.cpp
#include "Lock.h"

Lock::Lock() : unlocked(false) {

}

// true if this function unlocked it, false if it was already unlocked
bool Lock::unlock() {
    if (unlocked) {
        return false;
    }
    unlocked = true;
    return true;
}

bool Lock::isUnlocked() const {
    return unlocked;
}