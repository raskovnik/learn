Future hello() async {
  print("Hello Dart");
}

void main() async {
  await hello();
  print("All done");
}