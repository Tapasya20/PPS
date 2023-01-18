#include<stdio.h>
void main()
{
    char a;
    printf("enter the alphabet");
    scanf("%c",&a);
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    printf("a is vowel");
    else if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    printf("a is vowel");
    else
    printf("a is a consonant");
}