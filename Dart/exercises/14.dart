import 'dart:io';

void reverseString(String? str) {
  print(str?.split(" ").reversed.join(" "));
}

void main() {
  print("Enter a string");
  String? sentence = stdin.readLineSync();
  reverseString(sentence);
}