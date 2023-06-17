
interface constant {
    float PI = 3.14f;
}

class calculate implements constant {
    void CircleArea(int r) {
        float area = PI * r * r;
        System.out.println("Area of the circle is: " + area);
    }

    public static void main(String[] args) {
        calculate c = new calculate();
        c.CircleArea(55);
    }
}
