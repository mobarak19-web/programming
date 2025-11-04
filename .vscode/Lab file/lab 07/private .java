package accessmodifier;


public class privateExample {
  private int roll = 17;
  
  private void display(){
      System.out.println (" Roll :" + roll);
      
      
  }
  public void accessPrivateInside() {
       display();
       
    }
    
}

 
 /* 
package accessmodifier;


public class test {
    public static void main( String[] args){
        privateExample ob = new privateExample ();
          ob.accessPrivateInside();
          
        
    }
    
    
}
    */