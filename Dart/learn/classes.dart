class Employee {
  var empName;
  var empAge;
  var empSalary;

  showEmpInfo() {
    print("The employee Name is : ${empName}");
    print("The employee age is: ${empAge}");
    print("The employee salary is: ${empSalary}");
  }
}

void main() {
  var emp = new Employee();
  emp.empName = "John Doe";
  emp.empAge = 30;
  emp.empSalary = 45000;
  emp.showEmpInfo();
}
