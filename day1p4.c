#include <stdio.h>
int main()
{
    int array[5];
    int max = array[0];
    printf("Enter the elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int p = 0; p < 5; p++)
    {
            if (array[p] > max)
                
            max = array[p];
    }
    printf("Max element is %d", max);

    return 0;
}