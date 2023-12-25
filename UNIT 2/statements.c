//Operators and Equality Operators

#include <stdio.h>

//function main begins program execution
int main (void)
 {
    // Prompt the user for input
    printf("Enter two integers, and I will tell you\n");
    printf("the relationships they satisfy: ");

    int num1; // First number to be read from the user
    int num2; // Second number to be read from the user

    // Read two integers from the user
    scanf("%d %d", &num1, &num2);

    // Check if num1 is equal to num2
    if (num1 == num2) 
    {
        printf("%d is equal to %d\n", num1, num2);
    }

    // Check if num1 is not equal to num2
    if (num1 != num2) 
    {
        printf("%d is not equal to %d\n", num1, num2);
    }

    // Check if num1 is less than num2
    if (num1 < num2) 
    {
        printf("%d is less than %d\n", num1, num2);
    }

    // Check if num1 is greater than num2
    if (num1 > num2) 
    {
        printf("%d is greater than %d\n", num1, num2);
    }

    // Check if num1 is less than or equal to num2
    if (num1 <= num2) 
    {
        printf("%d is less than or equal to %d\n", num1, num2);
    }

    // Check if num1 is greater than or equal to num2
    if (num1 >= num2) 
    {
        printf("%d is greater than or equal to %d\n", num1, num2);
    }

    
}
