#include<stdio.h>
void main()
{
    int i,a[10],n,m=1,x;
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        a[i]=m;
        m+=2;
        printf("%d\n",a[i]);
    }
    x=n;
    for(i=(n/2+1);i<=n;i++)
    {
        a[i]=x;
        x-=2;
        printf("%d\n",a[i]);
    }
}