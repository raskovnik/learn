import 'dart:io';
import 'dart:math';

void main() {
  String number = (Random().nextInt(9999) + 1000).toString();
  print("Welcome to cows and bulls\nType exit to stop the game");

  int attempts = 0;

  while (true) {
    int cows = 0;
    int bulls = 0;
    attempts += 1;

    stdout.write("Please enter a 4 digit number: ");
    String guess = stdin.readLineSync()!;

    if (number == guess) {
      print("Bullseye! You took $attempts");
      break;
    } else if (guess.toLowerCase() == "exit") {
      print("Bye!");
      break;
    } else if (number.length != guess.length) {
      print("Invalid input, a 4 digit number is required");
      continue;
    }

    for (int i = 0; i < number.length; i++) {
      if (number[i] == guess[i]) {
        cows += 1;
      } else if (guess.contains(number[i])) {
        bulls += 1;
      }
    }
    print("Attempts: $attempts\nCows: $cows\nBulls: $bulls");
  }

}