import java.util.Scanner;

public class factorial {
    static int fact(int n){
        if(n==1|| n==0){
            return 1;
        }
        else{
            return n*fact(n-1);
        }
    }
    public static void main(String[] args) {
        System.out.println("Enter the number:");
        Scanner input=new Scanner(System.in);
        int number=input.nextInt();
        input.close();
        System.out.print("The factorial of "+number);
        System.out.print(" is "+fact(number));


    }
}
