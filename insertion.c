#include<stdio.h>
int main(){
    int arr[10],pos,temp,element;
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The entered array is:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("array[%d] =%d\n",i,arr[i]);
    }
    printf("Enter the position which you want to delete the element:\n");
    scanf("%d",&pos);
    for (int i = pos ; i <10 ; i++)
    {
        arr[i]=arr[i+1];
    }
    for (int i = 0; i < 9; i++)
    {
        printf("array[%d] =%d\n",i,arr[i]);
    }
    
    
    


    
return 0;
}