#include<stdio.h>
int main()
{
    int n,i,a[100],j,m,s=0,x,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //printf("%d ",m);
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                s++;
            }
        }
        if(s==1)
        {
            k++;
        }
    }
    printf("%d",k);
}
    