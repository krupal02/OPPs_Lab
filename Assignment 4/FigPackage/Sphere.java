package FigPackage;

public class Sphere extends Figure {

    // Constructor to initialize the radius
    public Sphere(double r) {
        this.r = r;
    }

    // Calculate the area of the sphere
    @Override
    public void calcArea() {
        a = 4 * pi * r * r;
    }

    // Calculate the volume of the sphere
    @Override
    public void calcVolume() {
        v = (4 * pi * r * r * r) / 3;
    }

    // Display the area of the sphere
    @Override
    public void dispArea() {
        System.out.println("Area of the sphere: " + a);
    }

    // Display the volume of the sphere
    @Override
    public void dispVolume() {
        System.out.println("Volume of the sphere: " + v);
    }
}
