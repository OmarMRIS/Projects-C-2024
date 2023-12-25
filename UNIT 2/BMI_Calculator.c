#include <stdio.h>

int main() {
    int weightPounds;
    int heightInches;
    int bmi;

    // Input from the user
    printf("Enter your weight in pounds: ");
    scanf("%d", &weightPounds);

    printf("Enter your height in inches: ");
    scanf("%d", &heightInches);

    // Calculate BMI (BMI = (weight in pounds / (height in inches * height in inches)) * 703)
    bmi = (weightPounds * 703) / (heightInches * heightInches);

    // Display the calculated BMI
    printf("Your BMI is: %d\n", bmi);

    // Determine the BMI category
    if (bmi < 18.5) {
        printf("BMI Category: Underweight\n");
    }
    if (bmi >= 18.5 && bmi <= 24.9) {
        printf("BMI Category: Normal\n");
    }
    if (bmi >= 25 && bmi <= 29.9) {
        printf("BMI Category: Overweight\n");
    }
    if (bmi >= 30) {
        printf("BMI Category: Obese\n");
    }

    return 0;
}
