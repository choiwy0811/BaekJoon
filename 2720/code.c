#include <stdio.h>
#include <string.h>
#include <math.h>




int main() {

   int num;
   int money[100];
   int q, d, n, p;
   int q_count = 0;
   int d_count = 0;
   int n_count = 0;
   int p_count = 0;

   scanf("%d", &num);

   for(int i=0; i<num; i++){

    scanf("%d", &money[i]);
   }


   for(int i=0; i<num; i++){


    q_count = money[i] / 25;
    d_count = (money[i] % 25) / 10;
    n_count = ((money[i] % 25)%10) / 5;
    p_count = ((money[i] % 25)%10)%5;


   printf("%d %d %d %d", q_count, d_count, n_count, p_count);
   printf("\n");
}
}
