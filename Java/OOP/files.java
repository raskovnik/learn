import java.io.File;

public class files {
    public static void main(String[] args) {
        File file = new File("meh.txt");
        if (file.exists()) {
            System.out.println("That files exists");
            System.out.println(file.getPath());
            System.out.println(file.getAbsolutePath());
        } else {
            System.out.println("That file doesn't exist");
        }
    }
}
