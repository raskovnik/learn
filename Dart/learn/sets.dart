void main() {
  var persons = <String>{"John", "Doe", "Smith", "Rowe"};
  print(persons);
  persons.add("Murphy");
  print(persons);

  var p = persons.elementAt(2);
  print(p);
  print("${persons.length}");

  if (persons.contains("Doe")) {
    print("Given element is found!");
  } else {
    print("Given element not found");
  }

  persons.remove("Doe");
  print(persons);

  persons.forEach((element) {
    print("Value: $element");
  });

  List<String> names = persons.toList();
  print(names);

  persons.clear();
  print(persons);
}
