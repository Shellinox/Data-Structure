public class doubleStack {
    static int[] Stack = new int[10];
    static int top1 = -1;
    static int top2 = Stack.length;

    // public static void display1() {
    //     System.out.println("The element at the top of stack 1 is " + Stack[top1]);
    // }

    // public static void display2() {
    //     System.out.println("The element at the top of stack 2 is " + Stack[top2]);
    // }
    public static void push1(int element) {
        top1++;
        if (top1 < top2) {

            Stack[top1] = element;
            System.out.println("The element at the top of stack 1 is " + Stack[top1]);
        } else {
            System.out.println("Stack 1 is full");
            top1--;
        }
    }

    public static void push2(int element) {
        top2--;
        if (top2 > top1) {
            Stack[top2] = element;
            System.out.println("The element at the top of stack 2 is " + Stack[top2]);
        } else {
            System.out.println("Stack 2 is full");
            top2++;
        }
    }

    public static void pop1() {
        if (top1 > -1) {
            int pop1 = Stack[top1];
            top1--;
            System.out.println("Popped element is " + pop1);
        } else {
            System.out.println("Stack 1 is empty");
        }

    }

    public static void pop2() {
        if (top2 < Stack.length) {
            int pop2 = Stack[top2];
            top2++;
            System.out.println("Popped element is " + pop2);

        } else {
            System.out.println("Stack 2 is empty");
        }

    }

    public static void main(String[] args) {
        push1(2);
        push1(3);
        push1(4);
        push1(5);
        push1(6);
        push2(7);
        push2(8);
        push2(9);
        push2(11);
        push2(24);
        push2(23);
        push2(57);
        pop1();
        // display2();
        
    }

}