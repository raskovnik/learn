#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#define SIZE 3

char board[SIZE][SIZE];
const char PLAYER = 'X';
const char COMPUTER = 'O';


void resetBoard();
void printBoard();
int freeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main() {

    char winner = ' ';
    resetBoard();

    while (winner == ' ' && freeSpaces() != 0) {

        printBoard();
        playerMove();
        winner = checkWinner();

        if (winner != ' ' || freeSpaces() == 0) {
            break;
        }

        computerMove();
        winner = checkWinner();

        if (winner != ' ' || freeSpaces() == 0) {
            break;
        }
    }
    printBoard();
    printWinner(winner);
}

void resetBoard() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0;j < SIZE; j++) {
            board[i][j] == ' ';
        }
    }
}

void printBoard() {
        printf("  %c |  %c |  %c ", board[0][0], board[0][1], board[0][2]);
        printf("\n---|---|---\n");
        printf("  %c |  %c |  %c ", board[1][0], board[1][1], board[1][2]);
        printf("\n---|---|---\n");
        printf("  %c |  %c |  %c  ", board[2][0], board[2][1], board[2][2]);
        printf("\n");
}

int freeSpaces() {
    int freespaces = 9;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 9; j < SIZE; j++) {
            if (board[i][j] != ' ') {freespaces--;}
        }
    }

    return freespaces;
}

void playerMove() {
    int x;
    int y;
    do {
        printf("Enter row #: ");
        scanf("%d", &x);
        x--;

        printf("Enter column #: ");
        scanf("%d", &y);
        y--;

        if (board[x][y] != ' ') {
            printf("Position is already filled\n");
            printf("%c\n", board[x][y]);

        }
        else {
            board[x][y] = PLAYER;
        }
    } while (board[x][y] != ' '); 
}

void computerMove() {
    srand(time(0));
    int x;
    int y;

    if (freeSpaces() > 0) {
        do {
            x = rand() % 3;
            y = rand() % 3;

        } while (board[x][y] != ' ');

        board[x][y] = COMPUTER;
    }
    else {
        printWinner(' ');
    }
}

char checkWinner() {
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
            return board[i][0];
        }
    }

    for (int i = 0; i < SIZE; i++) {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
            return board[0][i];
        }
    }

    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        return board[1][1];
    }

    return ' ';

}

void printWinner(char winner) {
    (winner == ' ') ?   printf("DRAW!") : printf("%c wins\n", winner);
}
