public class A{
    static int id;
    static {
        id=17;
         System.out.println("static Block");
    }
    public static void main(String[] args) {
        System.out.println("ID: "+id);
          System.out.println("main method");
    }
}