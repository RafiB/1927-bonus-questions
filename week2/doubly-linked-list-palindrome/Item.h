// Item.h - functions for ADT elements
// Written by Rafi Blecher, March 2014

#ifndef ITEM_H
#define ITEM_H

typedef void *Item;

// Examples for ints
#define printItem(x) (printf("%d", *(int *)x))
#define ItemGT(a, b) ((*(int *)a) > (*(int *)b) ? 1 : 0)
#define ItemLT(a, b) ((*(int *)a) < (*(int *)b) ? 1 : 0)
#define ItemEQ(a, b) ((*(int *)a) == (*(int *)b))
// we don't need to free an int.
#define ItemFree(a)

#endif
