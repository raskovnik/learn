import 'dart:io';

void main() {
  print("Enter a string");
  String? sentence = stdin.readLineSync()?.toLowerCase();
  if (sentence == sentence?.split(" ").reversed.join(" ")) {
    print("$sentence is a palindrome");
  } else {
    print("$sentence is not a palindrome");
  }
}