#include<stdio.h>
int main()
{
    int a,b,i,max,lcm=1;
    scanf("%d%d",&a,&b);
    max=(a>b) ? a:b;
    for(i=max;;i+=max)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
    }
    printf("%d",lcm);
}