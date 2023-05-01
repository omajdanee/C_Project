#include <stdio.h>
#include <cs50.h>

int main() {

    int x = get_int("1st num :");
    int y = get_int("2nd num :");
    float result = x/y;
    printf("%.50f\n" ,(double) x / (double) y);
}