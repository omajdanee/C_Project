#include <stdio.h>
#include <cs50.h>

int main()
{

    float price = get_float("Regular Price : ");
    int percent = get_int("Percent: ");
    float discount = price * (100 - percent) /100 ;
    printf("The Finale Price is : %.1f \n" , discount);
}
