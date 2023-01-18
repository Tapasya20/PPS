#include<stdio.h>
#include<math.h>
void main()
{
    float i=1,n,m;
    scanf("%f%f",&n,&m);
    i=ceil(n/2)*ceil(m/2);
    printf("%f",i);
}