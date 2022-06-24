import 'dart:io';
import 'dart:math';

void main() {
  var random = Random();

  int number = random.nextInt(100);
  int guessCount = 0;

  while (true) {
    print("\nEnter your guess");
    int guess = int.parse(stdin.readLineSync()!);
    
    if (guess > number) {
      stdout.write("Your guess is too high");
      guessCount += 1;
    } else if (guess < number) {
      stdout.write("Your guess is too low");
      guessCount += 1; 
    } else {
      print("The number was $number and you got it after $guessCount guessess");
      break;
    }

  }

}