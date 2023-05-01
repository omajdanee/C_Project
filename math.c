#include <stdio.h>
#include <cs50.h>

int main() {

    int num1 =5 ;
    int num2 = 6 ;

    printf("%d \n" , ++num1);
    printf("%d %d \n",num1 , num2);
    printf("%d \n",num1 +num2);
    printf("%d \n",num1 * num2);
    printf("%d \n",num1 % num2);
    num1 +=2;
    printf("%d \n",num1);
    num2 -=2;
    printf("%d \n",num2);
}
