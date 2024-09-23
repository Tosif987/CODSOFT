#include <iostream>
using namespace std;

char mat[3][3] = {{'1', '2', '3'}, 
                 {'4', '5', '6'}, 
                 {'7', '8', '9'}};

char player = 'X';

void printBoard() {
    cout << " " << mat[0][0] << " | " << mat[0][1] << " | " << mat[0][2] << endl;
    cout << "---+---+---" << endl;
    cout << " " << mat[1][0] << " | " << mat[1][1] << " | " << mat[1][2] << endl;
    cout << "---+---+---" << endl;
    cout << " " << mat[2][0] << " | " << mat[2][1] << " | " << mat[2][2] << endl;
}

bool checkWin() {
    // check rows
    for (int i = 0; i < 3; i++) {
        if (mat[i][0] == mat[i][1] && mat[i][1] == mat[i][2])
            return true;
    }
    // check columns
    for (int i = 0; i < 3; i++) {
        if (mat[0][i] == mat[1][i] && mat[1][i] == mat[2][i])
            return true;
    }
    // check diagonals
    if (mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2])
        return true;
    if (mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0])
        return true;
    return false;
}

void playGame() {
    int move;
    do {
        printBoard();
        cout << "Player " << player << ", enter your move (1-9): ";
        cin >> move;
        int row = (move - 1) / 3;
        int col = (move - 1) % 3;
        if (mat[row][col] != 'X' && mat[row][col] != 'O') {
            mat[row][col] = player;
            if (checkWin()) {
                printBoard();
                cout << "Player " << player << " wins!" << endl;
                return;
            }
            player = (player == 'X') ? 'O' : 'X';
        } else {
            cout << "Invalid move, try again." << endl;
        }
    } while (true);
}

int main() {
    playGame();
    return 0;
}
