import java.util.InputMismatchException;
import java.util.Scanner;

public class exception_handling {
    public static void main(String[] args) {

        try {
            Scanner scanner = new Scanner(System.in);
    
            System.out.println("Enter a whole number to divide ");
            int x = scanner.nextInt();
    
            System.out.println("Enter a whole number to divide ");
            int y = scanner.nextInt();         
     
            int z = x/y;
            System.out.println("Result "+z);
    
            scanner.close();

        }
        catch (ArithmeticException e) {
            System.out.println("You can't divide by zero");
        }
        catch (InputMismatchException e) {
            System.out.println("Please enter a number");
        }

        finally {
            System.out.println("Executed final block");
        }
    }
}