#include <stdio.h>
int Perfect(int n);
void printPerfect(int start, int end);
int main()
{
    int start, end;
    printf("Enter lower limit to print perfect numbers: ");
    scanf("%d", &start);
    printf("Enter upper limit to print perfect numbers: ");
    scanf("%d", &end);
    
    printf("All perfect numbers between %d to %d are: \n", start, end);
    printPerfect(start, end);
    return 0;
}
int Perfect(int n)
{
    int i, sum;
    sum = 0;
    for(i=1; i<n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    if(sum == n)
        return 1;
    else
        return 0;
}
void printPerfect(int start, int end)
{
    while(start <= end)
    {
        if(Perfect(start))
        {
            printf("%d, ", start);
        }
        
        start++;
    }   
}