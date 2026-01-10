package exception_user;

import java.util.Scanner ;
public class user {
    
   public static void main(String[] args){
       //int count =1;
       //do{
         while(true){
             
           
           try{
               Scanner input = new Scanner(System.in);
               System.out.print("place enter num1 :");
               int num1 = input.nextInt();
               System.out.print("place enter num2 :");
               int num2 = input.nextInt();
               int result=num1/num2 ;
               System.out.println("Result :"+num1 +"/"+num2 +"="+result);
               //count=2;
           }catch(Exception e){
               System.out.print(e);
               System.out.print(" you must enter a integer place try agin");
               
           }
       }
      // while(count==1);
        
    }
}

