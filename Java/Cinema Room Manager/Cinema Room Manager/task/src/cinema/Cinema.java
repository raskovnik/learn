package cinema;
import java.util.Scanner;

public class Cinema {

    public static void main(String[] args) {
        // Write your code here
        Scanner scanner = new Scanner(System.in);
//        System.out.println("Cinema:");
//        System.out.println("  1 2 3 4 5 6 7 8");
//        for (int i = 1; i < 8; i++) {
//            System.out.print(i + " ");
//            for (int j = 0; j < 8; j++) {
//                System.out.print("S ");
//            }
//            System.out.println();
//        }
        System.out.println("Enter the number of rows:");
        int rows = scanner.nextInt();
        System.out.println("Enter the number of seats in each row:");
        int seats = scanner.nextInt();

        char[][] cinema = new char[rows][seats];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < seats; j++) {
                cinema[i][j] = 'S';
            }
        }

        int purchased = 0;
        int income = 0;
        String percentage;
        while (true) {
            System.out.println("""
                    1. Show the seats\n
                    2. Buy a ticket\n
                    3. Statistics
                    0. Exit""");

            int choice = scanner.nextInt();
            percentage = String.format("%.2f", ((purchased / (rows * seats))*100.00)/100.00);
            switch (choice) {
                case 1:
                    System.out.println("Cinema:");
                    for (int i = 1; i <= seats; i++) {
                        System.out.print(" " + i);
                    }
                    System.out.println();
                    for (int i = 0; i < rows; i++) {
                        System.out.print(i + 1 + " ");
                        for (int j = 0; j < seats; j++) {
                            System.out.print(cinema[i][j] + " ");
                        }
                        System.out.println();
                    }
                    break;
                case 2:
                    int row;
                    int seat;
                    while (true) {
                        System.out.println("Enter a row number:");
                        row = scanner.nextInt();
                        System.out.println("Enter a seat number in that row:");
                        seat = scanner.nextInt();


                        if (row > rows || seat > seats) {
                            System.out.println("Wrong input!");
                        } else if (cinema[row - 1][seat - 1] == 'B') {
                            System.out.println("That ticket has already been purchased");
                        } else {
                            break;
                        }
                    }
                    cinema[row - 1][seat - 1] = 'B';
                    purchased++;

                    if (rows * seats < 60) {
                        System.out.println("Ticket price: $10");
                        income += 10;
                    } else {
                        if (row <= rows / 2) {
                            System.out.println("Ticket price: $10");
                            income += 10;
                        } else {
                            System.out.println("Ticket price: $8");
                            income += 8;
                        }
                    }

                    System.out.println("Cinema:");
                    for (int i = 1; i <= seats; i++) {
                        System.out.print(" " + i);
                    }
                    System.out.println();
                    for (int i = 0; i < rows; i++) {
                        System.out.print(i + 1 + " ");
                        for (int j = 0; j < seats; j++) {
                            System.out.print(cinema[i][j] + " ");
                        }
                        System.out.println();
                    }
                    break;
                case 3:
                    System.out.println("Number of purchased tickets: "+purchased);
                    percentage = String.format("%.2f", ((purchased * 100.00 / (rows * seats))));
                    System.out.println("Percentage: " + percentage + "%");
                    System.out.println("Current income: $"+income);
                    if (rows * seats < 60) {
                        System.out.println("Total income: $" + rows * seats * 10);
                    } else {
                        System.out.println("Total income: $"+((rows/2)*10*seats+(rows-(rows/2))*8*seats));
                    }
                    break;
                case 0:
                    return;
            }

        }

    }
}


//
//        if (rows * seats < 60) {
//            System.out.println("Total income:\n$"+(rows*seats*10));
//        } else {
//            System.out.println("Total income:\n$"+((rows/2)*10*seats+(rows-(rows/2))*8*seats));
//        }

//
//    }
//}