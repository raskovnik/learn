import java.util.Scanner;

public class acceptInput {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("What is your name? ");
        String name = scanner.nextLine();

        System.out.println("What is you age? ");
        int age = scanner.nextInt();
        scanner.nextLine(); // clear the scanner
        
        System.out.println("What is your favorite food?");
        String food = scanner.nextLine();

        System.out.println("Hello "+name);
        System.out.println("You are "+age+" years old");
        System.out.println("You like "+food);
    }
}
