class Employee {
  String call(String name, int age) {
    return "Employee name is $name and age is $age";
  }
}

void main() {
  Employee emp = new Employee();
  var msg = emp("John", 30);
  print(msg);
}