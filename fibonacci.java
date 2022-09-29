import java.util.Scanner;

public class fibonacci {
    static int fib(int n){
        if(n==1 || n==2){
            return 1;
        }
        return fib(n-1)+fib(n-2);
    }
    public static void main(String[] args) {
        int n;
        System.out.println("Enter the value of n:");
        Scanner input=new Scanner(System.in);
        n=input.nextInt();
        input.close();
        int result=fib(n);
        System.out.print("The ");
        System.out.print(n+"th term of the series is "+result);
    }
}
