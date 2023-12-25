#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input from the user
    printf("Enter the total time elapsed in seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate hours, minutes, and seconds
    hours = totalSeconds / 3600;        // 3600 seconds in an hour
    totalSeconds %= 3600;               // Remaining seconds after extracting hours
    minutes = totalSeconds / 60;        // 60 seconds in a minute
    seconds = totalSeconds % 60;        // Remaining seconds after extracting minutes

    // Output the time in hours:minutes:seconds format without leading zeros
    printf("Time elapsed: %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
