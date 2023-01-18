#include<stdio.h>
void main()
{
    int i,n,k,a[100],x,y,c,m;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        y=a[i];
        c=0;
        if(a[i]<k)
        {
            while(y>0)
            {
                y=y/10;
                c++;
            }
            x=a[i]%10;
        }
    }
}