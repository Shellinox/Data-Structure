#include<stdio.h>
int main(){
    int arr[2][3][3]={{2,3,4,8},{3,5,6,7},{{3,4,5,4}},{7,4,8,4},{64,21,67,2},{8,2,6,5}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                 printf("%d ",&arr[i][j][k]);
            }
            printf("\n");
            
        }
        printf("\n");
        
    }
    
return 0;
}