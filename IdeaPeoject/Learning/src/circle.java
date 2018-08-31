import java.util.Scanner;
class circle {
    public static void main(String[] args) {
        Scanner stdIn =  new Scanner(System.in);
        final double PI = 3.1416;

        System.out.print("radius: ");
        double r = stdIn.nextDouble();

        System.out.println("perimeter = " + 2 * PI * r);
        System.out.println("area = " + PI * r * r);
    }
}
