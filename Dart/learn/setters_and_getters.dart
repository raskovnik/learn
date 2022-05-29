class Employee {
  var empName;
  var empAge;
  var empSalary;
  
  String get emp_name {
    return empName;
  }

  void set emp_name(String name) {
    this.empName = name;
  }

  void set emp_age(int age) {
    if (age <= 18) {
      print("Employee age should be greater than 18 years");
    } else {
      this.empAge = age;
    }
  }

  int get emp_age {
    return empAge;
  }

  void set emp_salary(int salary) {
    if (salary <= 0) {
      print("Salary should be greater than zero");
    } else {
      this.empSalary = salary;
    }
  }

  int get emp_salary {
    return empSalary;
  }
}

void main() {
  Employee emp = new Employee();
  emp.emp_name = "John Doe";
  emp.emp_age = 25;
  emp.emp_salary = 25000;

  print("Employee's name is: ${emp.emp_name}");
  print("Employee's age is: ${emp.emp_age}");
  print("Employee's salary is: ${emp.emp_salary}");
}