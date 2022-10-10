public class switch_case {
    public static void main(String[] args) {
        String day = "Friday";

        switch(day) {
            case "Sunday":
                System.out.println("It is sunday");
                break;
            case "Monday":
                System.out.println("It is monday");
                break;
            default:
                System.out.println("Invalid day");
        }
    }
}
