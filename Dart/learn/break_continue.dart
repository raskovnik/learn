void main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    } else if (i == 7) {
      break;
    }
    print(i);
  }
}
