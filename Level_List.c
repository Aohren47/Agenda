//
// Created by haron on 11/13/2023.
//

#include "Level_List.h"
#include "Cell.h"

Level_list *createEmptyLevel_list(int maxLevel){
    Level_list *mylist = (Level_list*) malloc(sizeof(Level_list));
    mylist->maxLevel=maxLevel;
    mylist->heads = (Cell**) malloc(sizeof(Cell*));
    mylist->heads==NULL;
    return mylist;
}

int isEmptyList(Level_list *myList) {
    return myList == NULL;
}

void insertCellAtHead(Level_list *mylist, int value, int nbLevel) {
    Cell *newcell = createCell(value, nbLevel);
    if (!isEmptyList(mylist)) {
        for (int i = 0; i < nbLevel; ++i) {
            newcell->nexts[i] = mylist->heads[i];
            mylist->heads[i] = newcell->nexts[i];
        }
    }
}

void printListLevel(Level_list *mylist, int nbLevel) {
    if (isEmptyList(mylist)) {
        printf("Vide");
    } else {
        if (nbLevel <= mylist->maxLevel) {
            printf("[list head_%d-]-->", nbLevel);
            Cell *temp = mylist->heads[nbLevel];
            while (temp != NULL) {
                printCell(temp);
                temp = temp->nexts[nbLevel];
            }//bite
            printf("NULL");
        }
    }
}

void printList(Level_list *mylist){
    for (int i=0;i<mylist->maxLevel;++i){
        printListLevel(mylist,i);
    }
}

void deleteList(Level_list *mylist){
    free(mylist);
}