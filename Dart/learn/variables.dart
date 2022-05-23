void main() {
  var firstname = "Altair";
  String lastName = "Alchemy";
  int num = 10;
  dynamic x = "tom";
  final pi = 3.14; //declare a constant
  const pie = 3.142; //declare a constant

  print("${pi} ${pie}");
  print(pie);
  print(x);
  print(num);
  print(firstname + " " + lastName);
}

void area() {
  const pi = 3.143;
  const area = pi * 12 * 12;
  print("The output is ${area}");
}
