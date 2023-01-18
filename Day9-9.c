#include<stdio.h>
void main()
{
    int n,i,sum=0,a,b=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    printf("true");
    else
    printf("false");
}