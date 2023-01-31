#include "sudoku.h"

int main(){
    int ** puzzle ;// maybe change varibale name for better form
    
    puzzle = createPuzzle();
    
    printPuzzle(puzzle);
    return 0;
}