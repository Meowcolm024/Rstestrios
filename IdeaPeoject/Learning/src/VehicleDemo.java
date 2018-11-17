public class VehicleDemo {
    public static void main(String args[]) {
        Vehicle minivan = new Vehicle();

        minivan.passengers = 7;
        minivan.fuelcap = 16;
        minivan.mpg = 21;

        int range = minivan.fuelcap * minivan.mpg;
        System.out.println("Minivan can carry " + minivan.passengers +
                " with a range of " + range);
    }
}
