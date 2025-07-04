#include <stdio.h>
#include <stdbool.h>

#define N 8  // Change this value for different board sizes

// Function to print the board
void printSolution(int board[N][N]) {
    static int count = 1;
    printf("\nSolution %d:\n", count++);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%s ", board[i][j] ? "Q" : ".");
        printf("\n");
    }
}

// Function to check if placing a queen at board[row][col] is safe
bool isSafe(int board[N][N], int row, int col) {
    int i, j;

    // Check this row on the left
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    // Check upper diagonal on the left
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // Check lower diagonal on the left
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

// Recursive function to solve N-Queens problem
bool solveNQUtil(int board[N][N], int col) {
    if (col == N) {
        printSolution(board);
        return true;
    }

    bool res = false;
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;
            res = solveNQUtil(board, col + 1) || res;
            board[i][col] = 0; // BACKTRACK
        }
    }
    return res;
}

// Main solver function
void solveNQ() {
    int board[N][N] = {0};

    if (!solveNQUtil(board, 0))
        printf("Solution does not exist.\n");
}

// Main function
int main() {
    solveNQ();
    return 0;
}
