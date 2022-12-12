import java.util.Stack;

public class StackPalindrome {
    public static void main(String[] args) {
        Stack<Character> stack1 = new Stack<Character>();
        Stack<Character> stack2 = new Stack<Character>();
        String para = "Mom";
        para=para.toLowerCase();
        for (int i = 0; i < para.length(); i++) {
            char temp=para.charAt(i);
            stack1.push(temp);
        }
        for (int i = para.length()-1; i >=0 ; i--) {
            char temp=para.charAt(i);
            stack2.push(temp);
        }
        if(stack1.equals(stack2)){
            System.out.println("Palindrome");
        }
        else{
            System.out.println("Not Palindrome");
        }
    }
}
