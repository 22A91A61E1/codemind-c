#include<stdio.h>
int main()
{
int n,lw[10],i,Bill=0,T;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&lw[i]);

scanf("%d",&T);

for(i=0;i<n;i++)
{
if(lw[i]<=T)
Bill+=1;
else
Bill+=2;
}
printf("%d",Bill);
return 0;
}
