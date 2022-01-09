import java.util.Scanner; 

public class MyClass {
    public static void main(String args[]) {
   
   Scanner sc = new Scanner(System.in);
   
   System.out.println("Fuck You");
   int x = sc.nextInt();
   int y = sc.nextInt();
   
   int h=0;
   
   for(int i=1;i<=x;i++){
       if(x%i==0&&y%i==0)
       h=i; 
   }
   
   int l=(x*y)/h;
   
   
   
   
System.out.println("HCF and LCM are :"+h +"\t & \t"+l);   
    }
}