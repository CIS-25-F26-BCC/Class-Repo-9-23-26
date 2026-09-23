// Lock.h
#pragma once

class Lock {
    private:
        bool unlocked;
        
    protected: // ***** what is this?
        Lock();
        bool unlock();
    public:
        bool isUnlocked() const;
};