#include <stdio.h>
#include <cs50.h>

int main() {

    string s = "BY!\0"; // string > array -> \0 = null mtzid walo hbs
    printf("%c%c%c\n", s[0],s[1],s[2]);

    //ASCII CODE
    printf("%i %i %i\n", s[0],s[1],s[2]);
}