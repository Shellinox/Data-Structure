import java.util.Stack;

public class StackRev {
    public static void main(String[] args) {
        Stack<Character> stack = new Stack<Character>();
        String para = "Sahil Hussain";
        for (int i = 0; i < para.length(); i++) {
            stack.push(para.charAt(i));
        }
        for (int i = 0; i < para.length(); i++) {
            System.out.print(stack.pop());
        }
    }
}
