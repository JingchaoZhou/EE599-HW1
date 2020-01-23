#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMeanTest, HandlesConsecutiveOddNumbers) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4, 5, 6, 7};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), 4);
  
}

TEST(FindMeanTest, HandlesConsecutiveNumbersEvenLength) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4, 5, 6};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), 3.5);
  
}

TEST(FindMeanTest, HandlesSizeOne) {
  Solution solution;
  std::vector<int> inputs = {2};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), 2);
  
}

TEST(FindMeanTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), -1);
  
}
