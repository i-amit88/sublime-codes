public interface A {
    public int meth1(int a,int b);
    public int meth2(int a,int b);
}

class MyClass implements A{
    @Override
    public int meth1(int a, int b) {
        return (a + b);
    }

    @Override
    public int meth2(int a, int b) {
        return (a-b);
    }

    public static void main(String args[]) {
        MyClass m = new MyClass();
        System.out.println(m.meth1(96,58));
        System.out.println(m.meth2(85,26));
    }
}
