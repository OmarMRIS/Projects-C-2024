#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    // Input from the user
    printf("Enter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate sum, average, and product
    int sum = num1 + num2 + num3;
    int average = sum / 3;
    int product = num1 * num2 * num3;

    // Determine the smallest number
    int smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    // Determine the largest number
    int largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    // Output the results
    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);

    return 0;
}
