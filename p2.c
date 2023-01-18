#include<stdio.h>
void main()
{
    int i,j,m;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=(4-i);j++)
        {
            printf(" ");
        }
        for(j=(4-i+1);j<(4+i);j+=2)
        {
            printf("i ");
            i++;
        }
    }
}