#include<stdio.h>
void main()
{
    int i,j,n;
    for(i=1;i<=4;i++)
    {
        n=i;
        for(j=1;j<=(4-i);j++)
        printf(" ");
        for(j=(4-i+1);j<=4;j++)
        {
            printf("%d",n);
            n++;
        }
        n--;
        for(j=5;j<=(4+i-1);j++)
        {
            n--;
            printf("%d",n);
        }
        printf("\n");
    }
}