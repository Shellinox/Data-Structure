#include <stdio.h>
#include <stdlib.h>
int MAX = 7;
int top = -1;
int stack[7];
int val;
void push()
{
    if (top == MAX - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Enter the value:\n");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The element at top is %d\n", stack[top - 1]);
        top = top - 1;
    }
}
void display()
{
    for (int i = 0; i < top + 1; i++)
    {
        printf("%d  ", stack[i]);
    }
    printf("\n");
}
int main()
{
    int choice;
    while (1)
    {
        printf("Enter 1 for push and 2 for pop 3 to display the stack 4 to exit:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice:\n");
            break;
        }
    }

    return 0;
}