#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int count=0;
    int i;
    for(i=1;i<=a;i++)
    {
         if(a%i==0)
         {
           count++;
         }
    }
    if(count==2)
    {
       printf("prime"); 
    }
    else
    {
        printf("not a prime");
    }
}