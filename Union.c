#include<stdio.h>
void main()
{
    int i,j,k,m=0,p,s,t;
    int a[]={1,2,3,3,2,5};
    int b[]={1,3,4,5,6,6};
    int c[10],d[10];
    printf("First set:\n");
    for(i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Second set:\n");
    for(i=0;i<6;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    printf("union of both sets\n");
    for(i=0;i<6;i++)
    c[i]=a[i];
    for(j=0;j<6;j++){
    c[i]=b[j];
    i++;}
    for(i=0;i<12;i++){
        k=0;
    for(j=i+1;j<12;j++)
    {
    if(c[i]==c[j])
    {k=1;
    break;
}
}
    if(k==0)
    { d[m]=c[i];
       ++m;
    }
    }
for(p=0;p<m;p++){
for(s=0;s<m-p;s++)
{if(d[s]>d[s+1]){
    t=d[s];
    d[s]=d[s+1];
    d[s+1]=t;}
}
}
for(i=0;i<m;i++)
printf("%d ",d[i]);
    }