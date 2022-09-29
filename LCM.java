import java.util.Scanner;
public class LCM {
    static void LC(int a,int b){
        int result,LCM=0;
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
            LCM=(a*b)/result;
                System.out.print("The LCM of "+a);
                System.out.print(" and "+b);
                System.out.print(" is "+LCM);

            }
    public static void main(String[] args) {
        System.out.println("Enter two numbers:");
        Scanner input=new Scanner(System.in);
        int a=input.nextInt();
        int b=input.nextInt();
        input.close();
        LC(a, b);
    }
}
