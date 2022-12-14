#include <stdio.h>
void search(int a[], int l, int h, int d)
{
    int count = 0, mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == d)
        {
            count++;
            break;
        }
        else if (a[mid] > d)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (count == 1)
    {
        printf("%d found at %dth position", d, mid + 1);
    }
    else
    {
        printf("Element not found");
    }
}
int main()
{
    int a[10], d;
    printf("Enter a sorted array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to search:\n");
    scanf("%d", &d);
    search(a, 0, 10, d);
    return 0;
}