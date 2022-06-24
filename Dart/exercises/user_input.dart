import 'dart:io';

void main() {
  print("Enter Your name:");
  var name = stdin.readLineSync();
  print("Enter Your age");
  int age = int.parse(stdin.readLineSync()!);
  age = 100 - age;
  print("$name, You have $age years to be 100 years old");

}