#include<stdio.h>
void mean(int *a)
{
    int sum=0,i,mean;
    for(i=0;i<5;i++)
    sum=sum+a[i];
    mean=sum/5;
    printf("the mean is %d",mean);
}
void median(int *a)
{
    printf("the median is %d",a[2]);  
}
void main()
{
    int a[5],i;
    printf("enter the elements of array\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    mean(a);
    printf("\n");
    median(a);
}