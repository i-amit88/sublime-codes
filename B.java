interface B {
    int divisions(int a,int b);
    int modules(int a,int b);
}

class Use implements B{

    @Override
    public int divisions(int a, int b) {
        return (a/b);
    }

    @Override
    public int modules(int a, int b) {
        return (a%b);
    }

    public static void main(String[] args) {
        Use u = new Use();
        System.out.println(u.divisions(9,3));
        System.out.println(u.modules(81,9));
        System.out.println("Name: Amit Gupta\nSap - 500095675\nRollno. R2142210966");
    }
}
