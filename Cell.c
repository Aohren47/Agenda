//
// Created by haron on 11/13/2023.
//

#include "Cell.h"
Cell* createCell(int value, int nbLevel){
    Cell *mycell = (Cell*)malloc(sizeof(Cell));
    mycell->value=value;
    mycell->nbLevel=nbLevel;
    mycell->nexts=NULL;
    return mycell;
}

void deleteCell(Cell* mycell){
    free(mycell);
}

void printCell(Cell* mycell){
    printf("%d",mycell->value);
    while (mycell->nexts!=NULL){
        for (int i = 0; mycell->nexts[i] != NULL ; ++i) {
            mycell=mycell->nexts[i];
            printf("%d",mycell->value);//comme précedemment on a fait un ->next[i), mycell->value correspondra à celui-ci
        }
        printf("\n");
    }
}

