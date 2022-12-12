import java.util.Stack;

public class DecimalToBinary {
    public static Stack<Integer> convert(int num) {
        Stack<Integer> binary = new Stack<Integer>();
        while (num != 0) {
            binary.push(num % 2);
            num /= 2;
        }
        binary.push(num);
        return binary;
    }

    public static void main(String[] args) {
        Stack<Integer> result = new Stack<Integer>();
        int num = 255;
        result = convert(num);
        while (!result.isEmpty()) {
            System.out.print(result.pop());
        }

    }
}
