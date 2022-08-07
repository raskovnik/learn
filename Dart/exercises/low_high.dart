import "dart:io";

void main() {
  int max = 100, min = 0, attempts = 0;

  while (true) {
    attempts += 1;
    int guess = (max + min) ~/ 2;

    print("My guess is the number is: $guess");
    stdout.write("Is the guess high, low or correct?: ");
    String correct = stdin.readLineSync()!;

    if (correct.toLowerCase() == "high") {
      max = guess;
    } else if (correct.toLowerCase() == "low") {
      min = guess;
    } else if (correct.toLowerCase() == "correct" || correct.toLowerCase().contains("cor")) {
      print("The number was $guess and gotten after $attempts attempts. Binary search for the win!!");
      break;
    }

  }
}