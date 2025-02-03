#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {

   int num;
   int sum=3;
   int result;
   scanf("%d", &num);

   for(int i=1; i<num; i++){

      sum = sum + pow(2, i);
   }

   result = sum*sum;
   printf("%d", result);
}
