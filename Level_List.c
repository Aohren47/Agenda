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
    int res = 0;
    for (int i = 0; i < myList->maxLevel; i++) {
        if(myList->heads[i] == NULL){
            res += 1;
        }
    }
    if(res == myList->maxLevel){
        return 1;
    } else {
        return 0;
    }
}//fonctionne


void insertCellAtHead(Level_list *mylist, Cell *newCell) {
    if (!isEmptyList(mylist)) {
        for (int i = 0; i < nbLevel; ++i) {
            newcell->nexts[i] = mylist->heads[i];
            mylist->heads[i] = newcell->nexts[i];
        }
    }
    printf("Liste vide");
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

void printListLevel(Level_list *mylist, int Level) {
    if (!isEmptyList(mylist)) {
        Cell *temp = mylist->heads[Level];
        printf("[list head_%d-]-->", Level);
        while (temp->nexts[Level] != NULL){
            printf("[ %d|@-]-->",temp->value);
            temp=temp->nexts[Level];
        }
        printf("-->NULL");
    } else{
        printf("Liste vide");
    }

}