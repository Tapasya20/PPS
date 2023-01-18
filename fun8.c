#include<stdio.h>
int gcd(int n,int m)
{
   int i,p;
   if(n<m)
   {
    for(i=1;i<=n;i++)
   {
    if(n%i==0 && m%i==0)
    p=i;
   }
   printf("gcd is%d",p);
   }
   if(m<n)
   {
    for(i=1;i<=m;i++)
   {
    if(n%i==0 && m%i==0)
    p=i;
   }
   printf("gcd is%d",p);

   }
}
int main()
{
    int n,m,p;
    printf("enter the no. whose gcd needs to be found");
    scanf("%d%d",&n,&m);
    gcd(n,m);
}