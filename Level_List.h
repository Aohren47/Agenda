//
// Created by haron on 11/13/2023.
//

#ifndef SKIPLIST_SANSJAD__LEVEL_LIST_H
#define SKIPLIST_SANSJAD__LEVEL_LIST_H
#include "Cell.h"
#include "stdio.h"
#include "stdlib.h"

typedef struct List{
    int maxLevel;
    Cell **heads;
}Level_list;
Level_list *createEmptyLevel_list(int maxLevel);

void insertCellAtHead(Level_list *mylist, int value, int nbLevel);

int isEmptyList(Level_list *myList);

void printListLevel(Level_list *mylist, int nbLevel);

void printList(Level_list *mylist);

#endif //SKIPLIST_SANSJAD__LEVEL_LIST_H
