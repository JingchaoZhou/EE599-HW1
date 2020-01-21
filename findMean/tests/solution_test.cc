#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMeanTest, HandlesConsecutiveNumbers) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4};
  EXPECT_FLOAT_EQ(solution.FindMean(inputs), 2.5);
  
}

TEST(FindMeanTest, HandlesConsecutiveNumbersEvenLength) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4, -2};
  EXPECT_FLOAT_EQ(solution.FindMean(inputs), 1.6);
  
}

TEST(FindMeanTest, HandlesSizeOne) {
  Solution solution;
  std::vector<int> inputs = {2};
  EXPECT_FLOAT_EQ(solution.FindMean(inputs), 2);
  
}

TEST(FindMeanTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_FLOAT_EQ(solution.FindMean(inputs), -1);
  
}
