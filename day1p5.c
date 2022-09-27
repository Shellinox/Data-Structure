#include <stdio.h>
int main()
{
    int pass, steps, count;
    int array[5];
    int visited=-1;
    int frequency[5];
    printf("Enter the array elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    for (steps = 0; steps < 5; steps++)
    {
        count = 1;
        for (pass = steps+1; pass < 5 ; pass++)
        {

            if (array[steps] == array[pass])
            {
                frequency[pass]=visited;
                count++;
            }
        }
        if(frequency[steps]!=visited){
                frequency[steps]=count;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (frequency[i]!=visited)
        {
            printf("The frequecy of %d is %d \n",array[i],frequency[i]);
        }
        
    }
    

    return 0;
}