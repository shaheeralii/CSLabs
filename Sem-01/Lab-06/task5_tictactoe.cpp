/*
 * Author: Syed Shaheer Ali
 * Task: 05 - Virtual Tic-Tac-Toe Game
 * Lab: 06 - Multi-Dimensional Arrays
 * Purpose: Simulates an interactive 3x3 Tic-Tac-Toe game using a 2D character array, 
 *          validating player moves and checking for row, column, diagonal wins or draws.
 */

#include <iostream>
using namespace std;

const int SIZE = 3;

// Function Prototypes
void initializeBoard(char board[SIZE][SIZE]);
void displayBoard(const char board[SIZE][SIZE]);
bool makeMove(char board[SIZE][SIZE], int row, int col, char player);
bool checkWin(const char board[SIZE][SIZE], char player);
bool checkDraw(const char board[SIZE][SIZE]);

int main() {
    char board[SIZE][SIZE];
    char currentPlayer = 'X';
    bool gameOver = false;

    initializeBoard(board);

    cout << "=== Virtual Tic-Tac-Toe Game ===\n";

    while (!gameOver) {
        displayBoard(board);

        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row col): ";
        cin >> row >> col;

        // Attempt move and validate
        if (!makeMove(board, row, col, currentPlayer)) {
            cout << "Invalid move! Please try again.\n";
            continue;
        }

        // Check if current player won
        if (checkWin(board, currentPlayer)) {
            displayBoard(board);
            cout << "Congratulations! Player " << currentPlayer << " wins!\n";
            gameOver = true;
        } 
        // Check for a draw
        else if (checkDraw(board)) {
            displayBoard(board);
            cout << "It's a draw! No more available moves.\n";
            gameOver = true;
        } 
        // Switch turn
        else {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }

    return 0;
}

// Fills board with numbers '1' through '9'
void initializeBoard(char board[SIZE][SIZE]) {
    char count = '1';
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = count++;
        }
    }
}

// Displays the current state of the board
void displayBoard(const char board[SIZE][SIZE]) {
    cout << "\nCurrent Board:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Validates bounds, checks if spot is free, and records move
bool makeMove(char board[SIZE][SIZE], int row, int col, char player) {
    if (row < 0 || row >= SIZE || col < 0 || col >= SIZE) {
        return false;
    }
    // Spot is available if it hasn't been replaced by 'X' or 'O'
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = player;
        return true;
    }
    return false;
}

// Checks rows, columns, and diagonals for 3 matching symbols
bool checkWin(const char board[SIZE][SIZE], char player) {
    // Check Rows & Columns
    for (int i = 0; i < SIZE; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    // Check Diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

// Checks if the grid is full with no winner
bool checkDraw(const char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            // If any cell still holds a digit, board isn't full yet
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}