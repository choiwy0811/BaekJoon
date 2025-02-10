#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {

   int num1, num2;


   while(1){
   scanf("%d %d", &num1, &num2);

   if(num2%num1==0){

    printf("factor");}

    else if(num1%num2==0){

        printf("multiple");
    }

    else if(num1 == 0 && num2==0){

        break;
    }

    else{

        printf("neither");
    }
   }

}
