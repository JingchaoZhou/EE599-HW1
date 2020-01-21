#include "solution.h"
#include <iostream>
float Solution::FindMean(std::vector<int> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  float result = 0;
  float sum = 0;
  float i = 0;
  for (auto n : inputs) {
      i = i + 1;
      sum = sum + n;
  }
  result = sum/i;
  return result;
}
