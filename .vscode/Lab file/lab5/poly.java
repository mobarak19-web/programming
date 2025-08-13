
public class A{
    void m(int a,int b){
         System.out.println(a+b);
    }
    void m(int a,double b){
         System.out.println(a+b);
    }
    void m(int a,int b,int c){
     System.out.println(a+b+c);
    }
    public static void main(String[] args) {
        A ob =new A();
        ob.m(5,7.005);
        ob.m( 10,5,18);
     
    }
}