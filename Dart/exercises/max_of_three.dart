import "dart:io";

void main() {
  stdout.write("Enter three numbers: ");
  List<String> input = stdin.readLineSync()!.split(" ");
  var mmax;
  // a > b ? a > c ? mmax = a: mmax = c : b > c ? mmax = b: mmax = c;
  int.parse(input[0])>int.parse(input[1])? int.parse(input[0]) > int.parse(input[2])? mmax = input[0]: mmax = input[2]: int.parse(input[1]) > int.parse(input[2]) ? mmax = input[1]: mmax = input[2];
  print("The largest is $mmax");
}