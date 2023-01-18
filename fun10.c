#include<stdio.h>
#include<math.h>
int power(int a, int b)
{
    if(b==0)
    return 1;
    else if(b%2==0)
    return pow(a,(b/2))*power(a,(b/2));
    else
    return pow(a,((b-1)/2))*power(a,((b-1)/2))*a;
}
void main()
{
    int a,b,p;
    printf("enter the no.");
    scanf("%d%d",&a,&b);
    p=power(a,b);
    printf("the ans is %d",p);
}