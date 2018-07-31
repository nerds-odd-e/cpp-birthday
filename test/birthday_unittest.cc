#include "gtest/gtest.h"
#include "../main/birthday.h"
#include "stub_today_provider.h"

namespace {

    TEST(Birthday, NotABirthday) {
        setToday(3, 15);
        ASSERT_EQ(false, IsBirthday());
    }

    TEST(Birthday, IsABirthday) {
        setToday(4, 9);
        ASSERT_EQ(true, IsBirthday());
    }

}