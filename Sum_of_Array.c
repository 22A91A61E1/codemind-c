#include<stdio.h>
int main()
{
    int n,sum=0,i=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     sum=sum+a[i];
    }
    printf("%d",sum);
}