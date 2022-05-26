class Employee {
  var empCode;
  Employee(var empCode) {
    this.empCode = empCode;
    print(empCode);
  }
}

void main() {
  Employee emp = Employee("EMP001");
}
