#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input from the user
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int largest, smallest;

    // Initialize largest and smallest with the first number
    largest = smallest = num1;

    // Check the second number
    if (num2 > largest) {
        largest = num2;
    }
    if (num2 < smallest) {
        smallest = num2;
    }

    // Check the third number
    if (num3 > largest) {
        largest = num3;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    // Output the results
    printf("The largest integer is: %d\n", largest);
    printf("The smallest integer is: %d\n", smallest);

    return 0;
}
