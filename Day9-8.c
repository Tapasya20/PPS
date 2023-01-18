#include<stdio.h>
void main()
{
    int n,i,fac=1,a,c=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    while(fac>0)
    {
        a=fac%10;
        if(a==0)
        c++;
        fac=fac/10;
    }
    printf("%d",c);
}