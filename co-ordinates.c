#include<stdio.h>
void main()
{
    float x,y;
    printf("enter the co-ordinates");
    scanf("%f%f",&x,&y);
    if(x>0 && y>0)
    printf("co-ordinates lie in first quadrant");
    else if(x<0 && y>0)
    printf("co-ordinates lie in second quadrant");
    else if(x<0 && y<0)
    printf("co-ordinates lie in the third quadrant");
    else
    printf("co-ordinate lie in fourth quadrant");
}