// LList.h - an interface for a linked list ADT
// Written by Rafi Blecher, March 2014

// Stop this from being #included multiple times
#ifndef LLIST_H
#define LLIST_H

#include "Item.h"

typedef struct LListRep *LList;
typedef struct LLNode *Node;

// create a new LList
LList newLList();
// free a LList
void dropLList(LList);
// Pretty-print a LList
void printLList(LList);

// count number of nodes in LList
int size(LList);

// insert Item at end of LList
void LListInsert(LList, Item);
// insert Item at index i of LList
// assumes i <= length(list)
void LListInsertAt(LList, Item, int);
// insert Item at head of LList
void LListInsertAtHead(LList, Item);
// delete the first node with data == Item
void LListDelete(LList, Item);
// delete all nodes with data == Item
void LListDeleteAll(LList, Item);
// delete a certain node from LList
void LListDeleteNode(LList, Node);
// check whether a value is in a LList
int LListFind(LList, Item);
// check if linked list is a palindrome
int LListIsPalindrome(LList);

#endif
