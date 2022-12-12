public class MAX_and_MIN_in_stack {
    static int[] Stack = new int[10];
    static int top = -1;

    public static int max() {
        int max = Stack[0];
        for (int i = 0; i <= top; i++) {
            if (Stack[i] > max) {
                max = Stack[i];
            }
        }
        return max;
    }

    public static int min() {
         int min = Stack[0];
        for (int j = 0; j <= top; j++) {
            if (Stack[j] <= min) {
                min = Stack[j];
            }
        }
        return min;
    }

    public static void push(int element) {
        top++;
        if (top < Stack.length) {

            Stack[top] = element;
            System.out.println("The element at the top of stack 1 is " + Stack[top]);
        } else {
            System.out.println("Stack 1 is full");
            top--;
        }
    }

    public static void pop() {
        if (top > -1) {
            int pop = Stack[top];
            top--;
            System.out.println("Popped element is " + pop);
        } else {
            System.out.println("Stack 1 is empty");
        }

    }

    public static void main(String[] args) {
        push(4);
        push(56);
        push(477);
        push(565);
        push(432);
        push(566);
        push(442);
        push(56354);
        push(446);
        System.out.println(max());
        System.out.println(min());

    }
}
