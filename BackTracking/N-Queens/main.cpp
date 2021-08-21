/** 
 * Solution for N-Queen Problem Backtracking
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printSolution(vector<int> &board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board.size(); j++) {
            if (board[i] == j) {
                cout << "Q ";
            } else {
                cout << "- ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Check if a queen can be placed on board[row]
bool isSafe(vector<int> &board, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col) {
            cout << "board[" << i << "] == " << col << endl;
            return false;
        }
        if (abs(board[i] - col) == row - i) {
            cout << "abs(board[" << i << "] - " << col <<  ") == " << row-i << endl;
            return false;
        }
    }
    return true;
}

bool solveNQ(vector<int> &board, int row) {
    if (row == board.size()) {
        return true;
    }
    for (int col = 0; col < board.size(); col++) {
        printSolution(board);
        cout << "row: " << row << " col: " << col << " board[row]: " << board[row] <<endl;
        if (isSafe(board, row, col)) {
            cout << "SAFE " << endl;
            board[row] = col;
            if (solveNQ(board, row + 1)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the size of the board: ";
    cin >> n;
    vector<int> board(n);
    if (solveNQ(board, 0)) {
        printSolution(board);
    } else {
        cout << "No solution exists" << endl;
    }
    return 0;
}

