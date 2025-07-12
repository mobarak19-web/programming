public class a6{
    static int i=0;
    void m (){
        i++;
        System.out.println(i);
    }
    public static void main(String[] args) {
        a6 ob1 = new a6();
        ob1.m();
        a6 ob2 = new a6();
        ob2.m();
        a6 ob3 = new a6();
        ob3.m();
    }
}