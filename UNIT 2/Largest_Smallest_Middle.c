#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int dec1 = 0, dec2 = 0, dec3 = 0, dec4 = 0, dec5 = 0; // Initialize decimals to 0

    // Input from the user
    printf("Enter five different numbers: ");
    scanf("%d.%d %d.%d %d.%d %d.%d %d.%d",
          &num1, &dec1, &num2, &dec2, &num3, &dec3, &num4, &dec4, &num5, &dec5);

    // Adjust decimals for negative numbers
    if (num1 < 0) {
        dec1 = -dec1;
    }
    if (num2 < 0) {
        dec2 = -dec2;
    }
    if (num3 < 0) {
        dec3 = -dec3;
    }
    if (num4 < 0) {
        dec4 = -dec4;
    }
    if (num5 < 0) {
        dec5 = -dec5;
    }

    // Determine the smallest number
    int smallest = num1 * 100 + dec1;
    if ((num2 * 100 + dec2) < smallest) {
        smallest = (num2 * 100 + dec2);
    }
    if ((num3 * 100 + dec3) < smallest) {
        smallest = (num3 * 100 + dec3);
    }
    if ((num4 * 100 + dec4) < smallest) {
        smallest = (num4 * 100 + dec4);
    }
    if ((num5 * 100 + dec5) < smallest) {
        smallest = (num5 * 100 + dec5);
    }

    // Determine the largest number
    int largest = num1 * 100 + dec1;
    if ((num2 * 100 + dec2) > largest) {
        largest = (num2 * 100 + dec2);
    }
    if ((num3 * 100 + dec3) > largest) {
        largest = (num3 * 100 + dec3);
    }
    if ((num4 * 100 + dec4) > largest) {
        largest = (num4 * 100 + dec4);
    }
    if ((num5 * 100 + dec5) > largest) {
        largest = (num5 * 100 + dec5);
    }

    // Determine the middle number
    int middle = num1 * 100 + dec1;
    if (middle == smallest) {
        middle = num2 * 100 + dec2;
    }
    if (middle == smallest || middle == largest) {
        middle = num3 * 100 + dec3;
    }
    if (middle == smallest || middle == largest) {
        middle = num4 * 100 + dec4;
    }
    if (middle == smallest || middle == largest) {
        middle = num5 * 100 + dec5;
    }

    // Output the results (divide by the fixed factor when printing)
    if (smallest < 0) {
        printf("Smallest is -%d.", -smallest / 100);
        if (-smallest % 100 != 0) {
            if (-smallest % 100 < 10) {
                printf("0");
            }
            printf("%d", -smallest % 100);
        }
    } else {
        printf("Smallest is %d.", smallest / 100);
        if (smallest % 100 != 0) {
            if (smallest % 100 < 10) {
                printf("0");
            }
            printf("%d", smallest % 100);
        }
    }
    printf("\n");

    printf("Middle is %d.", middle / 100);
    if (middle % 100 != 0) {
        if (middle % 100 < 10) {
            printf("0");
        }
        printf("%d", middle % 100);
    }
    printf("\n");

    if (largest < 0) {
        printf("Largest is -%d.", -largest / 100);
        if (-largest % 100 != 0) {
            if (-largest % 100 < 10) {
                printf("0");
            }
            printf("%d", -largest % 100);
        }
    } else {
        printf("Largest is %d.", largest / 100);
        if (largest % 100 != 0) {
            if (largest % 100 < 10) {
                printf("0");
            }
            printf("%d", largest % 100);
        }
    }
    printf("\n");

    return 0;
}
