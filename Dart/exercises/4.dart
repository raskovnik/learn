import 'dart:io';

void main() {
  print("Enter a number");
  int no = int.parse(stdin.readLineSync()!);
  print("The divisors of $no are:");
  for (int i = 1; i < no; i++) {
    if (no % i == 0) {
      print(i);
    }
  }
}