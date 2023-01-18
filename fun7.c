#include<stdio.h>
void strong(int i)
{
    int fac,a,m,j,sum=0;
    m=i;
    while(m>0)
    {
        a=m%10;
        fac=1;
        for(j=1;j<=a;j++)
        fac=fac*j;
        sum=sum+fac;
        m=m/10;
    }
    if(i==sum)
    printf("%d is strong no.\n",i);
}
void main()
{
    int i,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    strong(i);
}