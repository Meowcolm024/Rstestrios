import java.util.Scanner;
class input {
    public static void main(String[] args) {
        Scanner stdIn = new Scanner(System.in);

        System.out.print("Enter x: ");
        int x = stdIn.nextInt();
        System.out.print("Enter y: ");
        int y = stdIn.nextInt();

        System.out.print("x + y = ");
        System.out.println(x + y);
    }
}
