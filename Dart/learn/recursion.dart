int factorial(int n) {
  if (n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}

void main() {
  var num = 7;
  print("The factorial of $num is: ${factorial(num)}");
}
