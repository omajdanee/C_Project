#include <stdio.h>
#include <cs50.h>


void hello(int n){

    printf("%i\n" , n);
}

void loop(int n) // n > ch7al mn marra ghn print "otmane"
{

    for(int i=0 ; i<n ; i++)
    {
        printf("otmane \n");
    }
}

void sum(int x , int y)
    {
        int result = x+y;
        printf("%d \n",result);

    }

void sum_return(int a , int b)
    {
        int resul = a+b;
        return resul;
    }

int main() {

    loop(1); // 10 = n
    sum(10,12);
    sum(100,12);

    printf("function with return");

    int x = sum_turn(10,7);
    int resul = x+3;
    printf("%i \n" , resul);


}