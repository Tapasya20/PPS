#include<stdio.h>
void main()
{
    int n,m;
    printf("enter the value of n");
    scanf("%d",&n);
    m=n;
    printf("the pattern is\n");
    while(n>-5)
    {
        printf("%d\n",n);
        n=n-5;
    }
    n=n+5;
    while(n<m)
    {
        n=n+5;
        printf("%d\n",n);
    }
}