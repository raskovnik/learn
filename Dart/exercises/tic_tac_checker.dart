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
void main() {
  List game = [[1, 2, 0],
                [2, 1, 0],
                [2, 1, 0]];

  print(CheckWinner(game));
  
}