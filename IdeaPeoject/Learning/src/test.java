public class test {

    private static int swap(int a, int b) {
        return a;
    }

    public static void main(String args[]) {
        int x = 1, y =2;

        System.out.println(x + " " + y);

        y = swap(x, x = y);

        System.out.println(x + " " + y);

    }
}
