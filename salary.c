#include<stdio.h>
void main()
{
    int total_salary,basic=0,hra,da,allow,pf;
    char grade;
    printf("enter the basic salary");
    scanf("%d",&basic);
    hra=(basic*20)%100;
    da=(basic*50)%100;
    pf=(basic*11)%100;
    scanf("%c",&grade);
    if(grade=='A')
    allow=1700;
    else if(grade=='B')
    allow=1500;
    else
    allow=1300;
    total_salary=basic+hra+da+allow-pf;
    printf("total salary = %d",total_salary);
}