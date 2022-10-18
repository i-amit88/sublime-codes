interface Test {
    public int square(int a);
}

class Arithmetic_class implements Test {
    @Override
    public int square(int a) {
        return (a * a);
    }
}

class ToTestInt {
    public static void main(String[] args) {
        Arithmetic_class ac = new Arithmetic_class();
        System.out.println(ac.square(89));
        System.out.println("Name: Amit Gupta\nSap - 500095675\nRollno. R2142210966");
    }
}
