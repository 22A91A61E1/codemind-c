#include<stdio.h>
int main()
{
    int n,a[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            c=c+1;
        }
    }
    if(c==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
