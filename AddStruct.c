#include <stdio.h>
struct Add
{
    int num1;
    int num2;
    int res;
};

struct Add display()
{
    struct Add n;
    n.num1 = 3;
    n.num2 = 4;
    n.res = n.num1 + n.num2;
    return n;
}
int main()
{
    struct Add n;
    n = display();
    printf("%d", n.res);
    return 0;
}