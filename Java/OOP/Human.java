public class Human {
    String name;
    int age;
    double height;

    Human(String name, int age, double height) {
        this.name = name;
        this.age = age;
        this.height = height;

    }

    void introduce() {
        System.out.println("My name is "+this.name+" and I am "+this.age+" years old");
    }
}
