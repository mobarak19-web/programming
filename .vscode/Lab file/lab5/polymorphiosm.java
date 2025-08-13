public class A{
    void m(int a,int b){
         System.out.println(a+b);
    }
    void m(int a,int b,int c){
         System.out.println(a+b+c);
    }
    void m(int a){
     System.out.println(a);
    }
    public static void main(String[] args) {
        A ob =new A();
        ob.m(5,7);
        ob.m(97);
        ob.m( 10,5,18);
      
    }
}