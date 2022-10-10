import java.util.ArrayList;

public class foreach {
    public static void main(String[] args) {
        String[] animals = {"cat", "dog", "rat", "bird"};

        for(String i : animals) {
            System.out.println(i);
        }

        ArrayList<String> animal = new ArrayList<String>();
        animal.add("animal1");
        animal.add("animal2");
        animal.add("animal3");
        
        for (String i: animal) {
            System.out.println(i);
        }
    }
}
