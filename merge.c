#include <stdio.h>
void conquer(int a[], int low, int mid, int high)
{
    int merged[high + 1];
    int i1 = low;
    int i2 = mid + 1;
    int k = 0;
    while (i1 <= mid && i2 <= high)
    {
        if (a[i1] <= a[i2])
        {
            merged[k++] = a[i1++];
        }
        else
        {
            merged[k++] = a[i2++];
        }
    }
    while (i1 <= mid)
    {
        merged[k++] = a[i1++];
    }
    while (i2 <= high)
    {
        merged[k++] = a[i2++];
    }
    for (int i = low; i < high; i++)
    {
        a[i] = merged[i];
    }
}
void divide(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (high + low) / 2;
        divide(a, low, mid);
        divide(a, mid + 1, high);
        conquer(a, low, mid, high);
    }
}
int main()
{
    int a[] = {3, 5, 6, 23, 7};
    int n = 5;
    divide(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}