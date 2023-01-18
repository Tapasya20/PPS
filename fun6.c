#include<stdio.h>
#include<math.h>
void armstrong(int i)
{
    int a,b,c=0,d,m;
    float sum=0;
    m=i;d=i;
    while(d>0)
    {
        a=d%10;
        d=d/10;
        c++;
    }
    while(m>0)
    {
        b=m%10;
        sum=sum+pow(b,c);
        m=m/10;
    } 
    if(sum==i)
    printf("%d no. is armstrong",i);
    
}
void main()
{
    int start,end,i;
    printf("enter the lower limit\n");
    scanf("%d",&start);
    printf("enter the upper limit\n");
    scanf("%d",&end);
    for(i=start;i<end;i++)
    armstrong(i);
}