#include<stdio.h>
void main()
{
    int i,n,j;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("1\t");
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("2\t");
        }
        else
        {
            for(j=3;j<=i;j++)
            {
                if(i%j==0)
                {
                    printf("%d\t",j);
                    break;
                }
            }
        }
    }
}