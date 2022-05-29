class SuperClass {
    void display() {
        print("Parent Class method");
    }
}

class SubClass extends SuperClass {
    void display() {
      print("Child class method");
    }
}

void main() {
  SuperClass supobj = new SuperClass();
  SubClass subObj = new SubClass();
  supobj.display();
  subObj.display();
}