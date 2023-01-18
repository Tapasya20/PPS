#include<stdio.h>
void main()
{
    int i,j,fac,n,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=1;
        for(j=1;j<=i;j++)
        {
            fac=fac*j;
        }
        sum=sum+fac;
    }
    printf("the sum of series is %d",sum);
}