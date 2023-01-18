#include<stdio.h>
void main()
{
    int i,n,c=0;
    printf("enter the number of attendees\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c+=n-i;
    }
    printf("%d",c);
}