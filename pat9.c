#include<stdio.h>
void main()
{
    int i,j,n,t;
    for(i=1;i<=4;i++)
    {
        n=1;
        for(j=1;j<=i;j++)
        {
            printf("%d",n);
            n++;
        }
        n--;
        for(j=(i+1);j<=(2*i-1);j++)
        {
            n--;
            printf("%d",n);
        }
        printf("\t");
    }
}