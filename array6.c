#include<stdio.h>
void main()
{
    int i,a[10],n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements oif te array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i+=2)
    {
        a[i+1]=a[i+1]+a[i];
        a[i]=a[i+1]-a[i];
        a[i+1]=a[i+1]-a[i];
    }
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}