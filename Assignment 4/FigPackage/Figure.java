package FigPackage;

public abstract class Figure {
    protected double r;  // Radius
    protected double a;  // Area
    protected double v;  // Volume
    protected final double pi = 3.1428;  // Constant Pi

    // Abstract methods to be implemented in derived classes
    public abstract void calcArea();
    public abstract void calcVolume();
    public abstract void dispArea();
    public abstract void dispVolume();
}
