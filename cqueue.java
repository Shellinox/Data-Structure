class cq {
    static int[] queue = new int[10];
    static int SIZE = 10;
    static int front = -1;
    static int rear = -1;

    public void enqueue(int element) {
        if (front == -1) {
            front++;
        } else {
            if (front == rear) {
                System.out.println("Queue is full");
            }
             else {
                if (rear == (SIZE - 1) && front > 0) {
                    rear = (rear + 1) % SIZE;
                    queue[rear] = element;
                } else {
                    rear++;
                    queue[rear] = element;
                }
            }

        }

    }

    public void dequeue() {
        if (front == -1) {
            System.out.println("Queue is empty");
        } else {
            front = (front + 1) % SIZE;
        }

    }

    public void display() {
        if (front == -1) {
            System.out.println("Queue is empty");
        } else {
            for (int element : queue) {
                System.out.print(element + " ");
            }
        }

    }
}

public class cqueue {
    public static void main(String[] args) {
        cq circular = new cq();
        circular.enqueue(3);
        circular.enqueue(6);
        circular.enqueue(8);
        circular.enqueue(9);
        circular.enqueue(4);
        circular.enqueue(74);
        circular.enqueue(89);
        circular.enqueue(38);
        circular.enqueue(35);
        circular.enqueue(32);
        circular.dequeue();
        circular.dequeue();
        circular.enqueue(7);
        circular.enqueue(2);
        circular.dequeue();
        circular.enqueue(87);
        circular.enqueue(56);
        circular.display();

    }

}
