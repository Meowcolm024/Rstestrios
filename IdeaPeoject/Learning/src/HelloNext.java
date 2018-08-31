import java.util.Scanner;
class HelloNext {
    public static void main(String[] args) {
        Scanner stdIn = new Scanner(System.in);

        //System.out.print("first name: ");
        //String first = stdIn.next();
        System.out.print("last name: ");
        String last = stdIn.nextLine();

        System.out.print("Hello " + " " + last);
    }
}
