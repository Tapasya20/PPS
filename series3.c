#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,x,n,fac;
    float sum=1;
    printf("enter the value of x and n");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        fac=1;
        for(j=1;j<=i;j++)
        {
            fac*=j;
        }
        sum=sum+((pow(x,i))/fac);
    }
    printf("\nthe sum of series is %f",sum);
}