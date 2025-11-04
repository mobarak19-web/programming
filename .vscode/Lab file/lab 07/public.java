package accessdem;

/**
 *
 * @author User
 */
public class publicExample {

   public String name = "mobarak";
    public int age =23;
    public void display(){
       System.out.println("Name :" + name); 
    }
}


package tsetdemo;

 import accessdem.publicExample ;
public class testpublic {
     public static void main(String[] args){
    publicExample ob = new publicExample ();
     System.out.println("ob.name");
     ob.display();
     
}

}