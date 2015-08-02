#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "fibonacci.h"

int main(int argc, char *argv[]) {
  assert(fibonacci(1) == 1);
  assert(fibonacci(2) == 1);
  assert(fibonacci(3) == 2);
  assert(fibonacci(4) == 3);
  assert(fibonacci(5) == 5);
  assert(fibonacci(6) == 8);

  printf("Iterative tests passed!\n");

  assert(fibonacci_rec(1) == 1);
  assert(fibonacci_rec(2) == 1);
  assert(fibonacci_rec(3) == 2);
  assert(fibonacci_rec(4) == 3);
  assert(fibonacci_rec(5) == 5);
  assert(fibonacci_rec(6) == 8);

  printf("All tests passed!\n");

  return EXIT_SUCCESS;
}
