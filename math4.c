#include<stdio.h>
void main()
{
    int n,c,i,m,a,sum=0,b,tot=0;
    m=n;b=n;
    printf("enter the number \n");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        c++;
    }
    for(i=0;i<(c-1)/2;i++)
    {
        a=m%10;
        m=m/10;
        sum+=a;
    }
    for(i=(c+1)/2;i<c;i++)
    {
        a=b%10;
        b=b/10;
        tot+=a;
    }
    if(sum==tot)
    printf("balanced number");
    else
    printf("not balanced");
}