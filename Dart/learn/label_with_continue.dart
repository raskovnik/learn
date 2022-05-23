void main() {
  outerloop:
  for (int i = 0; i < 3; i++) {
    print("Outerloop: ${i}");

    for (int j = 0; j < 5; j++) {
      if (j == 3) continue outerloop;

      print("Innerloop: ${j}");
    }
  }
}
