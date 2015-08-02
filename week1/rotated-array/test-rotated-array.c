#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "rotated-array.h"

int main(int argc, char *argv[]) {
  int a1[1] = {1};
  int b1[1] = {1};
  assert(rotated_array(a1, b1, 1) == 1);

  int a2[1] = {1};
  int b2[1] = {2};
  assert(rotated_array(a2, b2, 1) == 0);

  int a3[2] = {1, 2};
  int b3[2] = {1, 2};
  assert(rotated_array(a3, b3, 2) == 1);

  int a4[2] = {2,1};
  int b4[2] = {1,2};
  assert(rotated_array(a4, b4, 2) == 1);

  int a5[7] = {1,2,3,5,6,7,8};
  int b5[7] = {5,6,7,8,1,2,3};
  assert(rotated_array(a5, b5, 7) == 1);
  b5[0] = 3; b5[6] = 5;
  assert(rotated_array(a5, b5, 7) == 0);

  printf("All tests passed!\n");

  return EXIT_SUCCESS;
}
