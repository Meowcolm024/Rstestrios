import java.util.Scanner;
import java.util.Random;
class kazuate {
    public static void main(String[] args) {
        Random rand = new Random();
        Scanner stdIn = new Scanner(System.in);

        int no = rand.nextInt(100);

        System.out.println("Game starts!");
        System.out.println("Guess a number between 0 and 99");

        int guess;
        do {
            System.out.print("What is it: ");
            guess = stdIn.nextInt();

            if (guess > no)
                System.out.println("It is smaller.");
            else if (guess < no)
                System.out.println("It is larger.");
        } while (guess != no);

        System.out.println("Correct");
    }
}
