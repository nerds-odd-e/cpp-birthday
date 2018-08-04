#include "today_provider.h"

bool IsBirthday() {
    auto today = getToday();
    return today.tm_mon + 1 == 4 && today.tm_mday == 9;
}

