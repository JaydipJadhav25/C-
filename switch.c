#include <stdio.h>

int main()
{
    int marks;

    printf("enter your marks : ");
    scanf("%d", &marks);

    if (marks < 30)
    {
        printf("tha grade is c ");
    }
    else if (30 <= marks < 70)
    {

        printf("tha garad is b ");
    }

    else if ( 70<= marks <= 100)
    {
        printf("the grad is A ");
    }
    else{
        printf("no valid ");
    }

    return 0;
}