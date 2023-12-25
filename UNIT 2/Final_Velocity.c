#include <stdio.h>

int main() {
    int u, a, t;
    
    // Input from the user
    printf("Enter the initial velocity (u) in m/s: ");
    scanf("%d", &u);

    printf("Enter the acceleration (a) in m/s^2: ");
    scanf("%d", &a);

    printf("Enter the time (t) in seconds: ");
    scanf("%d", &t);

    // Calculate final velocity and distance traversed
    int v = u + (a * t);
    int s = (u * t) + (0.5 * a * t * t);

    // Output the results
    printf("Final velocity (v): %d m/s\n", v);
    printf("Distance traversed (s): %d meters\n", s);

    return 0;
}
