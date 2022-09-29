#include<stdio.h>
int main(){
    int arr[11],pos,num;
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
    printf("Enter the position where you want to insert the element:\n");
    scanf("%d",&pos);
    printf("Enter the element you want to insert:\n");
    scanf("%d",&num);
    for (int i = 10 ; i >=pos ; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
    for (int i = 0; i < 11; i++)
    {
        printf("array[%d] =%d\n",i,arr[i]);
    }
    
    
    


    
return 0;
}