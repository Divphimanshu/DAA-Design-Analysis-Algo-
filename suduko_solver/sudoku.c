#include <stdio.h>

#define UNASSIGNED 0
#define N 9

// Function to print the Sudoku board
void printBoard(int board[N][N]) {
    for (int row = 0; row < N; row++) {
        if (row % 3 == 0 && row != 0) {
            printf("---------------------\n");
        }
        for (int col = 0; col < N; col++) {
            if (col % 3 == 0 && col != 0) {
                printf("| ");
            }
            printf("%d ", board[row][col]);
        }
        printf("\n");
    }
}

// Check if num can be placed at board[row][col]
int isSafe(int board[N][N], int row, int col, int num) {
    // Check row
    for (int x = 0; x < N; x++) {
        if (board[row][x] == num) return 0;
    }

    // Check column
    for (int x = 0; x < N; x++) {
        if (board[x][col] == num) return 0;
    }

    // Check 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            if (board[i][j] == num) return 0;
        }
    }

    return 1;
}

// Find an unassigned location; returns 1 if found, else 0
int findUnassignedLocation(int board[N][N], int *row, int *col) {
    for (*row = 0; *row < N; (*row)++) {
        for (*col = 0; *col < N; (*col)++) {
            if (board[*row][*col] == UNASSIGNED) {
                return 1;
            }
        }
    }
    return 0;
}

// Solve Sudoku using backtracking
int solveSudoku(int board[N][N]) {
    int row, col;

    // If no unassigned location, puzzle solved
    if (!findUnassignedLocation(board, &row, &col)) {
        return 1;
    }

    // Try digits 1 to 9
    for (int num = 1; num <= 9; num++) {
        if (isSafe(board, row, col, num)) {
            board[row][col] = num;

            if (solveSudoku(board)) {
                return 1;
            }

            // Backtrack
            board[row][col] = UNASSIGNED;
        }
    }

    return 0;  // trigger backtracking
}

int main() {
    int board[N][N] = {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    printf("Sudoku puzzle:\n");
    printBoard(board);

    if (solveSudoku(board)) {
        printf("\nSolved Sudoku:\n");
        printBoard(board);
    } else {
        printf("No solution exists.\n");
    }

    return 0;
}
