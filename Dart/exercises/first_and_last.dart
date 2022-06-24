void createList(List<int> arr) {
  List<int> b = [arr[0], arr[arr.length - 1]];
  print(b);
}

void main() {
  List <int> a = [5, 10, 15, 20, 25];
  createList(a);
}