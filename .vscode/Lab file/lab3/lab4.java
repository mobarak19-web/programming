public class A{
    int a=10;
    static int b=20;
    void m1(){
      System.out.println(a);
      System.out.println(b);
    }
    static void m2 (){
         System.out.println(b);
    }
    public static void main(String[] args) {
       A ob = new A();
       ob. m1();
       ob.m2();
    }
}