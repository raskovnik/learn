import 'dart:io';
import 'dart:math';

void main() {
  var random = Random();

  Map<String, String> rules = {
    "rock": "scissors",
    "scissors": "paper",
    "paper": "rock"
  };

  int user = 0;
  int comp = 0; 

  List<String> options = ["rock", "paper", "scissors"];

  while (true) {
    String compChoice = options[random.nextInt(options.length)];
    print("\nEnter Your Choice, Rock, Paper or Scissors");
    var userChoice = stdin.readLineSync()?.toLowerCase();

    if (userChoice == "exit") {
      print("\nScores: \nYou: $user Computer: $comp");
      break;
    }

    if (!options.contains(userChoice)) {
      stdout.write("Incorrect Choice!\n");
      continue;
    } else if (userChoice == compChoice) {
      stdout.write("Draw");
    } else if (rules[compChoice] == userChoice) {
      print("$compChoice vs $userChoice, The computer wins\n");
      comp += 1;
    } else if (rules[userChoice] == compChoice) {
      print("$userChoice vs $compChoice, You win\n");
      user += 1;
    }
    
  }
}