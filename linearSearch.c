#include<stdio.h>
int main(){
 int arr[10]={3,6,8,2,78,43,8,4,8,7},num=555,count=0,i;
 for (i = 0; i < 10; i++)
 {
    if(arr[i]==num){
        count++;
        break;
    }
 }
 if (count==1)
 {
    printf("%d found at %d position",num,i+1);
 }
 else{
    printf("Element not found!");
 }
 
return 0;
}