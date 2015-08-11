#Doubly Linked List: Palindrome

We say that a linked list is a palindrome if it looks the same whether you
read it forwards or backwards.

The following lists are palindromic:

    (0)-|
    (0)->(0)-|
    (0)->(1)->(0)-|
    (0)->(1)->(0)->(2)->(0)->(1)->(0)-|

The following lists are not palindromic:

    (0)->(1)-|
    (2)->(1)-|

Your job is to implement the function `LListIsPalindrome` in `doubly-linked-list-palindrome.c`
