#include<stdio.h>
void main()
{
    int i,a[10],c=0,b[10],n=0,j=0;
    printf("enter the number of squares\n");
    scanf("%d",&n);
    printf("enter the tastiness levels of squares\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            c=a[i+1];
        }
    }
    printf("she gets %d",c);
}