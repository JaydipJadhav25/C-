#include <stdio.h>

int main()
{
int age;
    printf("enter your age : ");
    scanf("%d",&age);
//use ternary opretor 
age>=18 ? printf("adult"):printf("not adult");
    return 0;
}