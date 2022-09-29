#include <stdio.h>
int main()
{
    int arr[100], lim, temp;
    printf("Enter the size of the array:\n");
    scanf("%d", &lim);
    printf("Enter the elements:\n");
    for (int i = 0; i < lim; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The entered array is:\n");
    for (int i = 0; i < lim; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    if (lim % 2 != 0)
    {
        for (int i = 0; i <= lim / 2; i++)
        {
            temp = arr[i];
            arr[i] = arr[lim - 1 - i];
            arr[lim - 1 - i] = temp;
        }
    }
    else
    {
        for (int i = 0; i < (lim / 2) + 1; i++)
        {
            temp = arr[i];
            arr[i] = arr[lim - 1 - i];
            arr[lim - 1 - i] = temp;
        }
    }
    printf("The reversed array is \n");
    for (int i = 0; i < lim; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}