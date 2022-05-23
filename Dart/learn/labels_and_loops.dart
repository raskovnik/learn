void main() {
  outerloop: //label name

  for (int i = 0; i < 5; i++) {
    print("Innerloop: ${i}");
    innerloop:
    for (int j = 0; j < 5; j++) {
      if (j > 3) break;

      //Quit innermost loop
      if (i == 2) break innerloop;

      //Quit outermost loop
      if (i == 4) break outerloop;

      print("Innerloop: ${j}");
    }
  }
}
