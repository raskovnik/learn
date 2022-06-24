import 'dart:io';

void isPrime(int num) {
  for (int i = 2; i < num / 2; i++) {
    if (num % i == 0) {
      print("$num is not a prime");
    } else {
      print("$num is a prime");
    }
  }
}

void main() {
  print("Enter a number");
  int num = int.parse(stdin.readLineSync()!);
  isPrime(num);
}