abstract class Employee {
  void showEmpInfo();
}

class Manager extends Employee {
  @override
  void showEmpInfo() {
    print("I am a manager");
  }
}

class Engineer extends Employee {
  @override
  void showEmpInfo() {
    print("I am an Engineer");
  }
}

void main() {
  Manager mng = new Manager();
  Engineer eng = new Engineer();
  mng.showEmpInfo();
  eng.showEmpInfo();
}