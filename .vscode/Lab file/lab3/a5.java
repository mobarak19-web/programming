public class a5{
   int i=0;
   void m (){
    i++;
    System.out.println(i);
   }
   public static void main(String[] args) {
    a5 ob1 = new a5();
    ob1.m();
    a5 ob2 = new a5();
    ob2.m();
    a5 ob3 = new a5();
    ob3.m();
    
   }
}