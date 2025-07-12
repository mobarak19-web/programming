public class a1 P{
    int i=97;
    void m1 (int i){
        i=i;
     System.out.println(i);
    }
    void m2 (int j){
    
        System.out.println(i);
        System.out.println(j);
    }
    public static void main(String[] args) {
        a1 obj = new a1();
        obj.m1(i:50);
        obj.m2(j:60);
    }
}
 