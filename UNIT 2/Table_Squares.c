#include <stdio.h>

int main() {
    int number = 0, square, cube;

    printf("number\tsquare\tcube\n");

    square = number * number;
    cube = number * number * number;
    printf("%d\t%d\t%d\n", number, square, cube);

    square = 1;
    cube = 1;
    printf("%d\t%d\t%d\n", square, square, cube);

    square = 4;
    cube = 8;
    printf("%d\t%d\t%d\n", square, square, cube);

    square = 9;
    cube = 27;
    printf("%d\t%d\t%d\n", square, square, cube);

    square = 16;
    cube = 64;
    printf("%d\t%d\t%d\n", square, square, cube);

    square = 25;
    cube = 125;
    printf("%d\t%d\t%d\n", square, square, cube);

    square = 36;
    cube = 216;
    printf("%d\t%d\t%d\n", square, square, cube);

    square = 49;
    cube = 343;
    printf("%d\t%d\t%d\n", square, square, cube);

    square = 64;
    cube = 512;
    printf("%d\t%d\t%d\n", square, square, cube);

    square = 81;
    cube = 729;
    printf("%d\t%d\t%d\n", square, square, cube);

    square = 100;
    cube = 1000;
    printf("%d\t%d\t%d\n", square, square, cube);

    return 0;
}
