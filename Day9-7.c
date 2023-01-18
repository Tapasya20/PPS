#include<stdio.h>
void main()
{
    int n,x,i;
    printf("enter the the no.\n");
    scanf("%d",&n);
    while(n>1)
    {
        printf("choose any integer\n");
        scanf("%d",&x);
        if(n%x==0)
        {
            n=n-x;
            i++;
        }
    }
     if(i%2!=0)
        printf("true\n");
    else
        printf("false");
}