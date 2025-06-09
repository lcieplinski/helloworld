#include <gtest/gtest.h>
#include <string>

// Declaration of greet (since it's defined in hello.cpp)
std::string greet(const std::string& name);

TEST(GreetTest, ReturnsCorrectGreeting) {
    EXPECT_EQ(greet("World"), "Hello, World!");
    EXPECT_EQ(greet("Alice"), "Hello, Alice!");
}