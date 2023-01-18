#include<stdio.h>
#include<math.h>
void main()
{
    int r,area=0,x;
    printf("enter the radius of circle\n");
    scanf("%d",&r);
    area=pow(sqrt(2)*r,2);
    printf("%d",area);
}