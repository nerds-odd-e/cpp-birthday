#include "gtest/gtest.h"
#include "../main/birthday.h"
#include "stub_today_provider.h"

namespace {

    TEST(Birthday, NotABirthday) {
        time_t now = time(0);
        tm *ltm = localtime(&now);
        ltm->tm_mon = 2;
        ltm->tm_mday = 15;
        setToday(ltm);
        ASSERT_EQ(false, IsBirthday());
    }

    TEST(Birthday, IsABirthday) {
        time_t now = time(0);
        tm *ltm = localtime(&now);
        ltm->tm_mon = 3;
        ltm->tm_mday = 9;
        setToday(ltm);
        ASSERT_EQ(true, IsBirthday());
    }

}