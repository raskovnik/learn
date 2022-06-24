import 'dart:io';

List <int> fib(int num) {
  List <int> fibo = [1, 1];
  
  for (int i = 0; i < num; i++) {
    fibo.add(fibo[i] + fibo[i + 1]);
  }
  return fibo;
}

void main() {
  print("Enter the numbers to generate");
  int num = int.parse(stdin.readLineSync()!);
  print(fib(num));
}