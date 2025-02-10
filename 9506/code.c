#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {

   int num;
   int sum;
   int arr[1000];
   int k;

   while(1){

   scanf("%d", &num);

   if(num == -1){

    break;
   }

   sum = 0;
   k = 0;

   for(int i=1; i<num; i++){

    if(num % i ==0){

        sum = sum +i;
        arr[k] = i;
        k++;
    }

   }

   if(num==sum){

   printf("%d = %d", num, arr[0]);
   for(int i=1; i<k;i++){

            printf("+%d", arr[i]);

   }

   printf("\n");

}
    else if(num!=sum){

        printf("%d is NOT perfect", num);
    }
}
}
