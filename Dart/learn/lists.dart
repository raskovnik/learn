void main() {
  var mylist = List.empty(growable: true);
  print("${mylist.length}");
  mylist.add(14);
  mylist.add(12);
  mylist.add(15);
  print("${mylist.length}");
  print(mylist);

  var list = ["John", "Doe", "Smith", "Roe"];
  list.forEach((element) {
    print("${list.indexOf(element)}: $element");
  });

  var num = [2, 3, 4];
  print(num);
  List l = [1, 2];
  num.insert(1, l[0]);
  num.insertAll(2, [5, 6]);
  num.remove(2);
}
