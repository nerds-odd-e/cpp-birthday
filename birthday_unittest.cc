#include "gtest/gtest.h"
#include "birthday.h"
#include "stub_today_provider.h"

namespace {

    TEST(Birthday, NotABirthday) {
        ASSERT_EQ(false, IsBirthday());
    }

    TEST(Birthday, IsABirthday) {
        ASSERT_EQ(true, IsBirthday());
    }

}