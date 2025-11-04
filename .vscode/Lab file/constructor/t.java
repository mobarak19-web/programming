public class t {
String name,gender;
int age;
 t(){
   System.out.println("No information"); 
 }
t(String n,int A){
    name =n;
  age=A;

}
t(String n , String G,int A){
    name = n; 
    gender =G;
    age=A;
}
void m(){
    System.out.println("Name :"+ name);
    System.out.println("Gender :"+ gender);
    System.out.println("Age :"+ age);
    System.out.println("\n\n ");
}
}
