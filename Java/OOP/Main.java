public class Main {
    public static void main(String[] args) {
        Car mycar = new Car();

        System.out.println(mycar.make);
        System.out.println(mycar.model);

        mycar.drive();
        mycar.brake();
    }
}