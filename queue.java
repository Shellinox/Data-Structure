class Qu {
    static int[] queue = new int[10];
    static int SIZE = 10;
    static int front = -1;
    static int rear = -1;

    public void enqueue(int element) {
        if (front == -1) {
            front++;
        }
        
            if (rear == SIZE - 1) {
                System.out.println("Queue is full");
            }
             else {
                rear++;
                queue[rear] = element;
            }

    }

    public void dequeue() {
        if (front == -1|| front>=rear) {
            System.out.println("Queue is empty");
        } else {
            front++;
        }

    }

    public void display() {
        if (front == -1) {
            System.out.println("Queue is empty");
        } else {
            System.out.print("[");
            for (int i = front; i <= rear; i++) {
                System.out.print(queue[i] + ",");
            }
            System.out.print("]");
        }

    }
}

public class queue {
    public static void main(String[] args) {
        
    }
}
