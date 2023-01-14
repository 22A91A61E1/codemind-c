#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d%d",&n,&a);
    if(n%2!=0)
    {
        printf("weird");
    }
    else if(n%2==0&&n>20)
    {
        printf("not weired");
    }
    else
    {
        printf("not weird");
    }
}