#include<stdio.h>
void main()
{
    int n,sum=0,b,c,sum1=0;
    printf("enter a no.\n");
    scanf("%d",&n);
    while(n>0)
    {
        b=n%10;
        sum=sum+b;
        n=n/10;
    }
        if(sum/10>0)
        {
            while(sum>0)
            {
                c=sum%10;
                sum1=sum1+c;
                sum=sum/10;
            }
            printf("%d",sum1);
        }
        else
        printf("%d",sum);
}