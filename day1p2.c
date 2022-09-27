#include<stdio.h>
int main(){
    int array[5];
    int sum=0;
    printf("Enter the elements: ");
    for (int i = 0; i < 5; i++)
    {
       scanf("%d",&array[i]);
    }
    printf("The elements are:\n");
    
    for (int i = 0; i < 5; i++)
    {
       printf("%d ",array[i]);
    }
    
return 0;
}