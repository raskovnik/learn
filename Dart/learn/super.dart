class SuperClass {
  int num = 50;
}

class SubClass extends SuperClass {
  int num = 100;
  void printNumber() {
    print(super.num);
  }
}

void main() {
  SubClass obj = SubClass();
  obj.printNumber();
}
