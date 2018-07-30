#include <ctime>
#include <iostream>
#include "birthday.h"

bool IsBirthday() {
    time_t now = time(0);
    auto today = localtime(&now);
    return today->tm_mon + 1 == 4 && today->tm_mday == 9;
}

