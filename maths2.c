#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,i,k,n,m;
    printf("enter the numbers of a and b\n");
    scanf("%d%d",&a,&b);
    n=pow(a,b);
    printf("enter the value of k\n");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        m=n%10;
        n=n/10;
    }
    printf("the kth digit is %d",m);
}