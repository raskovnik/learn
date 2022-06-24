List <int> noDuplicates(List<int> array) {
 return Set<int>.from(array).toList();
}

void main() {
  List<int> a = [5,4, 5, 6, 6, 4, 10, 15, 20, 25];
  print(noDuplicates(a));
}