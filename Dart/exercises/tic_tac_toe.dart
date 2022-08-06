import 'dart:io';
import 'dart:math';

int GetInput() {
  print("Enter the position you want to place your input");
  int pos = int.parse(stdin.readLineSync()!);
  return pos;
}

String CheckWinner(List board) {
  for (int i = 0; i < board.length; i++) {
    try {
      if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2 != 0]) {
        return "The winner is player ${board[i][0]}";
      } else if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != 0) {
        return "The winner is player ${board[i][i]}";
      }
    } catch (e) {
      continue;
    }
  }

  if (board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
    return "The winner is player ${board[1][1]}";
  }

  return "It is a tie";
}

bool isFull(int n) {
  return (n == 0);
}

bool insert(List board, int pos, String input, int empty) {
  if (board[pos % 2][(pos ~/ 2)] != "-") {
    print("Position is not empty. Enter another position");
    return false;
  } else {
    board[pos%2][pos ~/ 2] = input;
    empty -= 1;
    return true;
  }
}

void DrawBoard(List board) {
  String dash = " --- ";
  for (int i = 0; i < 3; i++) {
    print(dash * 3);
    for (int j = 0; j < 3; j++) {
      stdout.write("| ${board[i][j]} ");
    }
    print("|");
  }
  print(dash * 3);
}

int CompInput() {
  return Random().nextInt(8);
}

void main() {
  List board = [["-", "-", "-"],
                ["-", "-", "-"],
                ["-", "-", "-"]];
  int empty = 9;
  DrawBoard(board);
  String choice;
  String? player1;
  String player2;

  do {
    print("Welcome to tic tac toe\n[1]Play against the computer\n[2]Play against another player");
    choice = stdin.readLineSync()!;
  } while (choice != 1 || choice != 2);

  do {
      print("Do you want to be X or O?: ");
      player1 = stdin.readLineSync()!;  
  } while (player1.toUpperCase() != "X" || player1.toUpperCase() != "O");

  if (player1.toUpperCase() == "X") {
      player2 = "O";
  } else {
    player2 = "X";
  }

//TODO: implement gameplay
  while (!isFull(empty)) {
    if (choice == 1) {
      while (true) {
        int user;
        int comp;

        do {
          user = GetInput();
        } while (!insert(board, user, player1, empty));

        do {
          comp = CompInput();
        } while (!insert(board, comp, player2, empty));

        
      }
    }

  }
}