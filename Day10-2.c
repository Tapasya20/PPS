#include<stdio.h>
void main()
{
    int n,x,i,total=1;
    printf("enter the number of cities\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d",&x);
        total=total*x;
    }
    total=(total%123567);
    printf("%d",total);
}