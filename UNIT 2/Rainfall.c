#include <stdio.h>

int main() {
    int highestRainfall, currentRainfall;
    
    // Input from the user
    printf("Enter the highest rainfall ever in one season (in mm): ");
    scanf("%d", &highestRainfall);

    printf("Enter the current year's rainfall (in mm): ");
    scanf("%d", &currentRainfall);

    // Check if the current rainfall exceeds the highest rainfall
    if (currentRainfall > highestRainfall) {
        printf("The current year's rainfall of %d mm exceeds the highest rainfall ever.\n", currentRainfall);
        highestRainfall = currentRainfall; // Assign the current rainfall as the new highest
    }

    // Output the new highest rainfall (which could be the same as the previous highest)
    printf("The highest rainfall ever is now %d mm.\n", highestRainfall);

    return 0;
}
