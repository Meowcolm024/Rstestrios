public class break4 {
    public static void main(String args[]) {
        int i;

        for (i=1; i < 4; i++) {
            one : {
                two: {
                    System.out.println("\ni is " + i);
                    if (i==1) break one;
                    if (i==2) break two;
                }
                System.out.println("After block two");
            }
            System.out.println("After block one");
        }
        System.out.println("After for");
    }
}
