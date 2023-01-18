#include<stdio.h>
void main()
{
    int i,n,a;
    printf("enter the value of n\n");
    scanf("%d",&n);
    a=9;
    for(i=1;i<n;i++)
    {
        a=a+(24+(16*(i-1)));
    }
    printf("answer if %d ",a);
}