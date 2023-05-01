#include <stdio.h>
#include <cs50.h>

int main() {


   /**int scores[3]= {90 ,12 ,86};

    printf(" Average %.2f \n",(scores[0] + scores[1] + scores[2]) / 3.0);

      int score[3];

      for(int i=0 ; i<3 ; i++) {

         score[i] = get_int("Value : \n");
      }

    printf(" Average: %.2f \n",(score[0] + score[1] + score[2]) / 3.0);
}*/


      int len = get_int("How many scores do you want");
      int scor[len];
      int result = 0;

      for(int i=0 ; i<len ; i++) {

         scor[i] = get_int("number : \n");
         result += scor[i];
      }

    printf(" Average: %.2f \n",result/ (float) len);
}