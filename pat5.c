#include<stdio.h>
void main()
{
    int i,j,n=0,m=0;
    for(i=1;i<=5;i++)
    {
        n=1;
        m=i;
        for(j=1;j<=i;j++)
        {
            printf("%d",n);
            n++;
        }
        for(j=(i+1);j<=(10-i);j++)
        printf(" ");
        for(j=(10-i+1);j<=10;j++)
        {
            printf("%d",m);
            m--;
        }
        printf("\n");
    }
}