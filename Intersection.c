#include<stdio.h>
void main(){
int a[100],b[100],c[100],i,j,k,m,n,p=0,mm=0,d[100],s,t;
printf("Enter the size of set 1 and 2 respectively:\n");
scanf("%d",&m);
scanf("%d",&n);
printf("Enter the element of 1st set\n");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
printf("Enter the element of 2nd set\n");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
printf("The intersection of both sets are:\n");
for(i=0;i<m;i++)
{k=0;
    for(j=0;j<n;j++)
    { if(a[i]==b[j])
        k=1;
    }
    if(k==1){
    c[p]=a[i];
    p++;
    }
}
for(i=0;i<p;i++){
        k=0;
    for(j=i+1;j<p;j++)
    {
    if(c[i]==c[j])
    {k=1;
    break;
}}
    if(k==0)
    { d[mm]=c[i];
       mm++;
    }}
for(p=0;p<mm-1;p++){
for(s=0;s<mm-p-1;s++)
{if(d[s]>d[s+1]){
    t=d[s];
    d[s]=d[s+1];
    d[s+1]=t;}
}
}
if(mm==0)
printf("Null set");
else{
  for(i=0;i<mm;i++)
    printf("%d ",d[i]);
}
}