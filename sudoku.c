#include <stdio.h>
#include <stdlib.h>
#include "sudoku.h"
#include "puzzle.c"

int main(){
    int ** puzzle ;// maybe change varibale name for better form
    
    puzzle = createPuzzle();
    
    printPuzzle(puzzle);
    return 0;
}