#include <stdio.h>

int main() {
    int number;

    // Input from the user
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    // Extract and print individual digits with spaces
    int digit1 = number / 10000;      // Extract the first digit
    int digit2 = (number % 10000) / 1000; // Extract the second digit
    int digit3 = (number % 1000) / 100;  // Extract the third digit
    int digit4 = (number % 100) / 10;    // Extract the fourth digit
    int digit5 = number % 10;           // Extract the fifth digit

    printf("%d   %d   %d   %d   %d\n", digit1, digit2, digit3, digit4, digit5);

    return 0;
}
