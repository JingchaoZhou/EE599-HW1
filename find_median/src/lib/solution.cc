#include "solution.h"
#include <iostream>
double Solution::FindMedian(std::vector<int> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }

  if (inputs.size() == 1){
    return inputs[0];
  }

  int i = 0;
  double result = 0;
  double two = 2;
  int size = inputs.size();
  int halfSize = size / 2;

  if ((size % 2) == 0){
    result = (inputs[halfSize] + inputs[halfSize-1]) / two;
  }

  else{
    for (auto n : inputs) {
      if (i = halfSize){
        result = inputs[i];
      }
      i = i + 1;
  }
  }
 

  return result;
}
