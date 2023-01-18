#include<stdio.h>
void lcm (int n, int m)
{
    int i,p=1;
    if(n>m)
    {
        for(i=2;i<=n;i++)
        {
           while(n%i==0 && m%i==0)
           {
              p=p*i;
              n=n/i;
              m=m/i;
           }
           while(m%i!=0 &&n%i==0)
           {
              p=p*i;
              n=n/i;
           }
           while(m%i==0 && n%i!=0)
           {
            p=p*i;
            m=m/i;
           }
        }
        printf("%d",p);
    }
    if(m>n)
    {
        for(i=2;i<=m;i++)
        {
           while(m%i==0 && n%i==0)
           {
              p=p*i;
              n=n/i;
              m=m/i;
           }
           while(n%i!=0 && m%i==0)
           {
              p=p*i;
              n=n/i;
           }
           while(m%i!=0 &&n%i==0)
           {
              p=p*i;
              n=n/i;
           }
        }
        printf("%d",p);
    }
}
void main()
{
    int n,m;
    printf("enter two no");
    scanf("%d%d",&n,&m);
    lcm(n,m);
}