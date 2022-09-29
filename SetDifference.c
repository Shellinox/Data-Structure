#include <stdio.h>
void setDiff(int a[], int b[], int n, int m)
{
    int count, c[99], k = 0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            c[k] = a[i];
            k++;
        }
    }
    printf("Set difference A-B is:\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}
void setDiff2(int a[], int b[], int n, int m){
    int count, c[99], k = 0;
    for (int i = 0; i < m; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            c[k] = b[i];
            k++;
        }
    }
    printf("Set difference B-A is:\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}
void main()
{
    int a[99], b[99], n, m;
    char c;
    printf("Enter the cardinality of set A and B respectively:\n");
    scanf("%d%d", &n, &m);
    printf("Enter the elements of set A:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of set B:\n");
    for (int j = 0; j < m; j++)
    {
        scanf("%d", &b[j]);
    }
    printf("Enter A for A-B and B for B-A\n");
    scanf("\n%c",&c);
    if(c=='A'){
        setDiff(a, b, n, m);
    }
    else if(c=='B'){
        setDiff2(a, b, n, m);
    }
    else{
        printf("Wrong Choice!!");
    }
}