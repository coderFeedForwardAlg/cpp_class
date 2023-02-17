#include <iostream>
#include "mazelayout3.h"
using namespace std;

    // prints out the maze
void printMaze(int row, int col){
    cout <<""<< endl;
    cout <<""<< endl;
    cout <<""<< endl;
        //https://stackoverflow.com/questions/4108313/how-do-i-find-the-length-of-an-array
    for(int i = 0; i < sizeof(maze[0])/sizeof(maze[0][0]); i++){
        for(int j = 0; j < sizeof(maze)/sizeof(maze[0]); j++){
            if(i == row && j == col){
                cout <<"X";
            }else{
                cout << maze[i][j];
            }
            
        }
        cout <<""<< endl;
    }
}

int main(){
    int row = startRow;
    int col = startCol;
    printMaze(row, col);
    int direction = 0; 
    //up, right, down, and left ( 0,1,2,3)

        // run while loop till at end point 
    while(!(row == endRow && col == endCol)) {
        maze[row][col] = '-';

            // fore every direction check if wall is right, up, left, down from that direction 
        if(direction == 0){ // if facing up 
            if(maze[row][col + 1] != '#'){
                col++;
                direction = 1;
            }else if(maze[row - 1][col] != '#'){
                row--;
                direction = 0;
            }else if(maze[row][col - 1] != '#'){
                
                col--;
                direction = 3;
            }else{
                row--;
                direction = 2;
            }

        }else if (direction == 1){ // if facing right
            if(maze[row + 1][col] != '#'){
                row++;
                direction = 2;
            }else if(maze[row][col + 1] != '#'){
                col++;
                direction = 1;
            }else if(maze[row - 1][col] != '#'){
                row--;
                direction = 0;
            }else{
                col--;
                direction = 3;
            }
        }else if(direction == 2){   // facing down 
            if(maze[row][col - 1] != '#'){
                col--;
                direction = 3;
            }else if(maze[row + 1][col] != '#'){
                row++;
                direction = 2;
            }else if(maze[row][col + 1] != '#'){
                col++;
                direction = 1;
            }else{
                row--;
                direction = 0;
            }

        }else if(direction == 3){    // facing left
            if(maze[row - 1][col] != '#'){
                row--;
                direction = 0;
            }else if(maze[row][col - 1] != '#'){
                col--;
                direction = 3;
            }else if(maze[row + 1][col] != '#'){
                row++;
                direction = 2;
            }else{
                col++;
                direction = 1;
            }
        }
    }
    
    
    printMaze(row, col);
    return 0;
}

/*

############
#...#..#...#
#.#.#.##.#.#
###.#....#.#
#....#.#.#.#
#.##.#.#.#.#
#..#.#.#.###
##.#.#.#.#..
#......#.#.#
##.###.#.#.#
X....#.#...#
############



############
#...#..#...#
#.#.#.##.#.#
###.#.---#.#
#....#-#-#.#
#.##.#-#-#.#
#..#.#-#-###
##.#.#-#-#-X
#.-----#-#-#
##-###-#-#-#
-----#-#---#
############

*/