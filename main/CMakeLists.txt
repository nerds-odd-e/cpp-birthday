set(Main_SRCS
        birthday.h birthday.cpp
        today_provider.cpp today_provider.h)

add_library(core ${Main_SRCS})
add_executable(cpp_birthday main.cpp)

target_link_libraries(cpp_birthday core)
