#include<stdio.h>
void linear(int *a,int n)
{
    int i,search;
    printf("enter the elemts to be found");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        printf("%d is found at position %d",search,i+1);
    }
}
void main()
{
    int a[10],i,n;
    printf("enter the size of array a");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    linear(a,n);
}