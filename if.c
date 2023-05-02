#include <stdio.h>
#include <cs50.h>

int main(){

    int x = get_int("x number: \n");
    int y = get_int("y number: \n");

    if (x < y )
    {
        printf(" x is less than y \n");
    }

    else if (x > y)
    {
        printf(" x is greater than y \n");
    }

    else(x == y) {

        printf(" x is equal to y \n");
    }
}
