#include <stdio.h>
#include <string.h>
#include <math.h>




int main() {

   int i = 2;
   int j = 7;
   int k =1;
   int count = 2;

   int num;
   scanf("%d", &num);

   while(1){

    if(i<=num && j>=num){

        printf("%d", count);
        break;

    }

    i = i +6*k;
    j = j + 6*(k+1);
    k++;
    count++;
   }
}
