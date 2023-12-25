#include <stdio.h>

int main() {
    int number;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Use the remainder operator to check if it's even or odd
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    }
    if (number % 2 != 0) {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
