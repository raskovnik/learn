import java.util.Random;

public class random_numbers {
    public static void main(String[] args) {
        Random random = new Random();

        int x = random.nextInt(6)+1;
        double y = random.nextDouble();
        boolean z = random.nextBoolean();

        System.out.println(x);
        System.out.println(z);
        System.out.println(y);
    }
}
