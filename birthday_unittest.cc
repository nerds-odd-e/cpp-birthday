#include "gtest/gtest.h"
#include "birthday.h"

namespace {

    TEST(Birthday, NotABirthday) {
        ASSERT_EQ(false, IsBirthday());
    }

}