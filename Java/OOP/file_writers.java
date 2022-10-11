import java.io.FileWriter;
import java.io.IOException;

public class file_writers {
    public static void main(String[] args) {
        try {
            FileWriter writer = new FileWriter("meh.txt");
            writer.write("Roses are red");
            writer.append("\nA poem");
            writer.close();
        } catch(IOException e) {
            e.printStackTrace();
        }
    }
}
