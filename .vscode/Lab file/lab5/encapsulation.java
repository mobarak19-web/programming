 public class m {
    private int a;
    public void setA(int value) {
        a = value;
    }
    public int getA() {
        return a;
    }
     public static void main(String[] args) {
        m ob = new m();
        ob.setA(97); 
        System.out.println(ob.getA()); 
    }
}