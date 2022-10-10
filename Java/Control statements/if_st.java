import java.util.Random;

public class if_st {
    public static void main(String[] args) {
        Random random = new Random();

        int age = random.nextInt();

        if (age >= 18) {
            System.out.println("You are an adult");
        } else {
            System.out.println("You are a minor");
        }
    }
}
