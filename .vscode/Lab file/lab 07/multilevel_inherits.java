class Grandperent {
     void msg1(){
         System.out.println("Grand perent");
         
     }
     class perent extends Grandperent {
         void msg2(){
             System.out.println ("perent");
             
         }
         
     }
     class child extends perent{
         void msg3(){
             System.out.println("child");
         }
     }
     public static void main (String[] args){
        child ob = new child ();
         ob.msg1();
          ob.msg2();
           ob.msg3();
     }
}