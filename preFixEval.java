import java.util.Stack;
public class preFixEval {
    static double evaluate(String exp) {
        Stack<Double> stack = new Stack<Double>();
        for (int i = exp.length()-1; i >=0 ; i--) {
            char c = exp.charAt(i);
            if (Character.isDigit(c)) 
            {
                stack.push((double)c - '0');
            }
             else 
            {
                double a = stack.pop();
                double b = stack.pop();
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
        String exp="+9*26";
        System.out.println(evaluate(exp));
    }
}
