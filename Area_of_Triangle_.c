#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float s;
    float e;
    s=(a+b+c)/2;
    e=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",e);
    
    
}