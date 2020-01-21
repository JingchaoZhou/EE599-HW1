#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintInformation();
  std::string expected = "I am Jingchao Zhou majoring in Electrical Engineering. I come from Chongqing, China. I used to study at Rutgers University in New Jersey as an undergraduate student";
  EXPECT_EQ(expected, actual);
}