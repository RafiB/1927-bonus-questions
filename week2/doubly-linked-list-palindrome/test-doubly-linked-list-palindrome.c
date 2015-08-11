#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "doubly-linked-list-palindrome.h"

int main(int argc, char *argv[]) {
  LList l1 = newLList();

  int i0 = 0;
  LListInsert(l1, (Item)&i0);
  assert(LListIsPalindrome(l1));

  int i1 = 1;
  LListInsert(l1, (Item)&i1);
  assert(!LListIsPalindrome(l1));

  int i2 = 0;
  LListInsert(l1, (Item)&i2);
  assert(LListIsPalindrome(l1));

  int i3 = 2;
  int i4 = 0;
  int i5 = 1;
  int i6 = 0;
  LListInsert(l1, (Item)&i3);
  LListInsert(l1, (Item)&i4);
  LListInsert(l1, (Item)&i5);
  LListInsert(l1, (Item)&i6);
  assert(LListIsPalindrome(l1));

  printf("All tests passed!\n");

  return EXIT_SUCCESS;
}
