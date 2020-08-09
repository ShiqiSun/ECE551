#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n);

void test(size_t expectedNumber, size_t getNumber) {
  if (expectedNumber == getNumber) {
    printf("good");
  }
  else {
    printf("So sad. It has some problems");
    exit(EXIT_FAILURE);
  }
}

int main(void) {
  int testcase1[6] = {1, 2, 3, 4, 5, 6};
  int testcase2[2] = {};
  int testcase4[100] = {1, 1, 1, 1};
  int testcase5[5] = {7, 6, 5, 4, 3};
  test(6, maxSeq(testcase1, 6));
  test(1, maxSeq(testcase2, 2));
  test(1, maxSeq(testcase4, 100));
  test(0, maxSeq(NULL, 0));
  test(1, maxSeq(testcase5, 5));
  int testcase6[5] = {-2, -1, -3, 2, 3};
  test(3, maxSeq(testcase6, 5));
  int testcase7[5] = {-2, -1, 0, 1, 2};
  test(5, maxSeq(testcase7, 5));
}
