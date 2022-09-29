import java.util.Scanner;

public class GCD {
    static void GC(int a,int b){
        int result;
            result=0;
            if(a>b){
                for (int i = 2; i <= b; i++) {
                    if(a%i==0 && b%i==0){
                        result=i;

                    }
                }
            }
            else{
                for (int i = 1; i <= a; i++) {
                    if(a%i==0 && b%i==0){
                        result=i;

                    }
                }
            }
                System.out.print("The GCD of "+a);
                System.out.print(" and "+b);
                System.out.print(" is "+result);
    }
    public static void main(String[] args) {
        System.out.println("Enter two numbers:");
        Scanner input=new Scanner(System.in);
        int a=input.nextInt();
        int b=input.nextInt();
        input.close();
        GC(a, b);
    }
}
