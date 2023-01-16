#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,i,j,a,c=0,t,l;
    char s[100];
    scanf("%d",&t);
    while(t)
    {
        scanf("%d%d",&n,&k);
        scanf("%s",s);
        for(i=k-1;i>=0;i--)
        {
            char s1[100];
            for(j=i+1;j<strlen(s);j++)
            {
                s1[j]=s[j];
            }
            
            for(l=i;l>=0;l--)
            {
                s1[i-l]=s[l];
                
            }
            if (i==0)
            printf("%s
",s1);
            for (a=0;a<strlen(s);a++)
            s[a]=s1[a];
            
        }
        
        t-=1;
    }
}