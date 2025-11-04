

class A {
    void m(int... a) {
        int sum = 0;
        for (int i : a) {
            sum += i;
        }
        System.out.println(sum);
    }

    public static void main(String[] args) {
        A ob = new A();
        ob.m(10, 20); // 30
        ob.m(5); // 5
        ob.m(5, 7, 10); // 22
        ob.m(1, 2, 3, 4); // 10
    }
}