#include <stdio.h>
#include <cs50.h>

int main() {

    int num1 = get_int("num1 : \n");
    int num2 = get_int("num2: \n");

    int result = num1 + num2;

    printf("Result : %i \n" , result);


    long numl1 = get_long("num1 long : \n");
    long numl2 = get_long("num2 long: \n");

    long resultl = numl1 + numl2;

    printf("Result : %li \n" , resultl); //long -> %li -> datatype -> big numbers -> billions

}