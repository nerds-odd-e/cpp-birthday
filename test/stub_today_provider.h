#include <ctime>

#ifndef CPP_BIRTHDAY_TODAY_PROVIDER_H
#define CPP_BIRTHDAY_TODAY_PROVIDER_H

tm* getToday() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    ltm->tm_mon = 3;
    ltm->tm_mday = 9;
    return ltm;
}

#endif //CPP_BIRTHDAY_TODAY_PROVIDER_H
