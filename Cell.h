//
// Created by haron on 11/13/2023.
//

#ifndef SKIPLIST_SANSJAD__CELL_H
#define SKIPLIST_SANSJAD__CELL_H

#include "stdio.h"
#include "stdlib.h"

typedef struct Cell {
    int value;
    int nbLevel;
    struct Cell **nexts;
} Cell;

Cell *createCell(int value, int nbLevel);

void printCell(Cell *mycell);

#endif //SKIPLIST_SANSJAD__CELL_H
