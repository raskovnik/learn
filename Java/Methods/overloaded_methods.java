public class overloaded_methods {
    public static void main(String[] args) {
        int a = 1;
        int b = 2;
        int c = 3;

        System.out.println(add(1,2,3));
        System.out.println(add(a, b));
    }

    static int add(int a, int b) {
        System.out.println("This is the overlodaded method 1");
        return a + b;
    }

    static int add(int a, int b, int c) {
        System.out.println("This is the overloaded method 2");
        return a + b + c;
    }
}
