#include "Cell.h"
#include "Level_List.h"

int main() {
    Level_list *mylist= createEmptyLevel_list(4);
    insertCellAtHead(mylist,5,0);
    printListLevel(mylist,0);
    printf("Hello, World!\n");
    return 0;
}
