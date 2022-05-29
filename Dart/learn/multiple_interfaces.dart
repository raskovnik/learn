class Person {
  var name;
  var age;

  void ShowName(){
    print("My name is: ${name}");
  }

  void showAge() {
    print("My age is: ${age}");
  }
}

class Profession {
  var prof;
  var salary;

  void showProfession() {
    print("My profession is: ${prof}");
  }
  void showSalary() {
    print("My salary is: ${salary}");
  }
}

class Employee implements Person, Profession {
  @override 
  var name;
  @override 
  var age;

  @override 
  void ShowName() {
    print("Employee name is: ${name}");
  }
  
  @override 
  void showAge() {
    print("Employee age is: ${age}");
  }
  
  @override 
  var prof;
  @override
  var salary;

  @override 
  void showProfession() {
    print("The employee profession is: $prof");
  }

  @override 
  void showSalary() {
    print("The employee salary is: $salary");
  }
}

void main() {
  Employee emp = new Employee();
  emp.name = "Keith";
  emp.age = 30;
  emp.prof = "System Analyst";
  emp.salary = 25000;
  
  emp.ShowName();
  emp.showAge();
  emp.showProfession();
  emp.showSalary();
}