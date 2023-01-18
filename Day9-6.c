#include<stdio.h>
void main()
{
    int i,a,l,r,m,c,d;
    printf("enter the left and right value of range\n");
    scanf("%d%d",&l,&r);
    for(i=l;i<=r;i++)
    {
        c=0;
        d=0;
        m=i;
        while(i>0)
        {
            i=i/10;
            c++;
        }
        while(m>0)
        {
            a=m%10;
            if(m%a!=0)
            {
                break;
            }
            else if(a==0)
            {
                break;
            }
            else
            {
                d++;
            }
            m=m/10;
        }
        if(c==d)
        printf("%d, ",i);
    }
}