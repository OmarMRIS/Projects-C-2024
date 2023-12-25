#include <stdio.h>

int main( void )
{
    int integer1 , integer2;
    

    printf("Enter your first Integer");
    scanf("%d", &integer1);

    printf("Enter your second Integer");
    scanf("%d", &integer2);

    int sum;
    sum = integer1 + integer2;

    printf("sum is %d", sum);
}