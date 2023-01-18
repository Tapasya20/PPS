#include<stdio.h>
void main()
{
    int n,i,a[10],b[10];
    printf("enter the size of the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[n-i-1]=a[i];
    }
    for(i=0;i<n;i++)
    printf("%d\n",b[i]);
}