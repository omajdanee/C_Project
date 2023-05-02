#include <stdio.h>
#include <cs50.h>

int main () {


char c = get_char("Do You Agree! \n");

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed \n");
    }
    else if (c == 'n' || c == 'N' )
    {
        printf("Not Agree! \n");
    }

   return(0);
}
