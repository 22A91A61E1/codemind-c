#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("weird");
    }
    else if(n%2==0&&n>6&&n<20)
    {
        printf("weird");
    }
    else
    {
        printf("not weird");
    }
}