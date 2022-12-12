import java.util.Stack;
public class postfixEval {
    static int evaluate(String exp) {
        Stack<Integer> stack = new Stack<Integer>();
        for (int i = 0; i < exp.length(); i++) {
            char c = exp.charAt(i);
            if (Character.isDigit(c)) 
            {
                stack.push(c - '0');
            }
             else 
            {
                int a = stack.pop();
                int b = stack.pop();
                switch (c) 
                {
                    case '+':
                        stack.push(b + a);
                        break;
                    case '-':
                        stack.push(b - a);
                        break;
                    case '*':
                        stack.push(b * a);
                        break;
                    case '/':
                        stack.push(b / a);
                        break;
                }
            }
        }
        return stack.pop();
    }
    public static void main(String[] args) {
        String exp="231*+9-";
        System.out.println(evaluate(exp));
    }
}
