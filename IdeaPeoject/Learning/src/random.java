import java.util.Random;
class random {
    public static void main(String[] args) {
        Random rand = new Random();
        int lucky = rand.nextInt(10);
        double notlucky = rand.nextDouble();
        System.out.println("the lucky number is : " + lucky);
        System.out.println("the not lucky number is : " + notlucky);
    }
}
