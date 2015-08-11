// BTree.c - implements a binary tree ADT
// Written by Rafi Blecher, March 2014

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "doubly-linked-list-palindrome.h"

// #defs
#define TRUE 1
#define FALSE 0

typedef struct LLNode {
    Node next;
    Node prev;
    Item data;
} LLNode;

typedef struct LListRep {
    Node head;
    Node tail;
    int size;
} LListRep;


// Prototypes
void LListDeleteToLimit(LList, Item, int);

// Interface: create a new LList
LList newLList() {
    LList new = malloc(sizeof(LListRep));
    assert(new != NULL);

    new->size = 0;
    new->head = new->tail = NULL;

    return new;
}

// Helper: create a new LLNode
Node newLLNode(Item item) {
    Node new = malloc(sizeof(LLNode));
    assert(new != NULL);

    new->next = new->prev = NULL;
    new->data = item;

    return new;
}

// Interface: free a LList
void dropLList(LList list) {
    if (list == NULL) return;

    Node curr, next;
    for (curr = list->head; curr != NULL; curr = next) {
        next = curr->next;
        ItemFree(curr->data);
        free(curr);
    }

    free(list);
}

// Interface: pretty-print a LList
void printLList(LList list) {
    Node curr;
    for (curr = list->head; curr != NULL; curr = curr->next) {
        printItem(curr->data);
    }
}

// Interface: count number of nodes in LList
int size(LList list) {
    return list->size;
}

// Interface: insert Item at end of LList
void LListInsert(LList list, Item item) {
    // Inserting at the end of the list is the same as inserting at
    // index list->size, because list->size is 1-based but iterating
    // through the list will be 0-based
    LListInsertAt(list, item, list->size);
}

// Interface: insert Item at index i of LList
void LListInsertAt(LList list, Item item, int i) {
    if (list == NULL) return;
    if (i < 0) return;
    if (i > list->size) return;

    Node new = newLLNode(item);
    if (list->size == 0)
        list->tail = new;
    if (i == 0 || list->size == 0) {
        new->next = list->head;
        list->head = new;
    } else {
        Node curr = list->head;
        int n;
        for (n = 0; n < i-1; n++)
            curr = curr->next;

        new->next = curr->next;
        new->prev = curr; curr->next = new;

        if (new->next == NULL) // inserted at tail of list
            list->tail = new;
    }

    list->size++;
}

// Interface: insert Item at head of LList
void LListInsertAtHead(LList list, Item item) {
    LListInsertAt(list, item, 0);
}

// Interface: delete the first node with data == Item
void LListDelete(LList list, Item item) {
    LListDeleteToLimit(list, item, 1);
}

// Interface: delete all nodes with data == Item
void LListDeleteAll(LList list, Item item) {
    LListDeleteToLimit(list, item, list->size);
}

// Helper: delete <limit> nodes with data == Item
void LListDeleteToLimit(LList list, Item item, int limit) {
    int numNodesDeleted = 0;
    Node next, curr;
    for (curr = list->head; numNodesDeleted < limit && curr != NULL; curr = next) {
        if (ItemEQ(item, curr->data)) {
            if (curr == list->head)
                list->head = curr->next;
            if (curr == list->tail)
                list->tail = curr->prev;
            next = curr->next;
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            ItemFree(curr->data);
            free(curr);
        }
    }
}

// Interface: delete a certain node from LList
void LListDeleteNode(LList list, Node node) {
    Node curr = list->head;
    while (curr != NULL) {
        if (curr == node) {
            if (curr == list->head) list->head = curr->next;
            if (curr == list->tail) list->tail = curr->prev;
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            ItemFree(curr->data);
            free(curr);
            break;
        }
    }
}

// Interface: check if linked list is a palindrome
//   Returns 1 if palindrome, otherwise 0
int LListIsPalindrome(LList list) {
  /* Implement me! */
  fprintf(stderr, "########################################\n"
                  "You need to implement LListIsPalindrome!\n"
                  "########################################\n");
  return 0;
}
