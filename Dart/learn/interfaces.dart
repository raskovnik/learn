class Employee {
  void showEmpInfo() {
    print("I am an employee");
  }
}

class Manager implements Employee {
  @override
  void showEmpInfo() {
    print("I am a manager");
  }
}

void main() {
  Manager mng = new Manager();
  mng.showEmpInfo();
}