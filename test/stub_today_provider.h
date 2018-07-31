#include <ctime>

#ifndef CPP_BIRTHDAY_TODAY_PROVIDER_H
#define CPP_BIRTHDAY_TODAY_PROVIDER_H

static tm* today;

void setToday(int month, int day) {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    ltm->tm_mon = month - 1;
    ltm->tm_mday = day;
    today = ltm;
}

tm* getToday() {
    return today;
}

#endif //CPP_BIRTHDAY_TODAY_PROVIDER_H
