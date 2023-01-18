#include<stdio.h>
void main()
{
    int i,j,m,n;
    for(i=1;i<=6;i++)
    {
        n=1;
        m=1;
        for(j=1;j<=(6-i+1);j++)
        {
            printf("%d",n);
            n++;
        }
        for(j=(6-i+2);j<(6+i-1);j++)
        printf(" ");
        for(j=11;j>=(6+i-1);j--)
        {
            printf("%d",m);
            m++;
        }
        printf("\n");
    }
}