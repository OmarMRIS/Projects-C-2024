#include <stdio.h>

int main() 
{
    int num1, num2, num3; // 3 integers
    int initial_velocity, acceleration, time, final_velocity, distance_traversed; // formula values

    // script (summary)
    puts("Welcome to the Weird physics Calculator here this program will calculate final velocity, distance traversed.");
    puts("So how this program works is, the initial velocity is the the smallest number, the largest number is the acceleration, the remaining is assigned to the time.");
    puts("Now");
    printf("Enter three different integers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    //finding smaller number
    initial_velocity = num1;

    if (num2 < initial_velocity) 
    {
        initial_velocity = num2;
    }

    if (num3 < initial_velocity) 
    {
        initial_velocity = num3;
    }

    //finding largest number
    acceleration = num1;

    if (num2 > acceleration) 
    {
        acceleration = num2;
    }

    if (num3 > acceleration) 
    {
        acceleration = num3;
    }

    //finding the remaining 
    time = num1;

    if (time == initial_velocity) 
    {
        time = num2;
    }

    if (time == acceleration) 
    {
        time = num3;
    }

    //calculatation part (formula)
    final_velocity = initial_velocity + (acceleration * time);
    distance_traversed = (initial_velocity * time) + (0.5 * acceleration * time * time);

    //showing th results (script)
    printf("Smallest is %d, therefore initial velocity  = %d meter/second\n\n", initial_velocity, initial_velocity);
    printf("Largest is %d, therefore acceleration  = %d meter/second square\n\n", acceleration, acceleration);
    printf("Remaining number is %d, therefore time = %d second(s)\n\n", time, time);
    printf("************************************************************************\n\n");
    printf("Using the above values, we get\n\n");
    printf("Final velocity = %d meter/second\n\n", final_velocity);
    printf("Distance traversed = %d meters\n", distance_traversed);

}
