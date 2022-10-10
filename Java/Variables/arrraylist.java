import java.util.ArrayList;

public class arrraylist {
    public static void main(String[] args) {
        ArrayList<String> food = new ArrayList<String>();
        food.add("pizza");
        food.add("ham");
        food.add("hotdog");

        for (int i = 0; i<food.size(); i++) {
            System.out.println(food.get(i));
        }

        food.set(0, "sushi");
        food.remove(2);
        food.clear();
    }
}
