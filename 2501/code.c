#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {

   int num1, min;
   int arr[10000] = {0,};
   int k;

   while(1){

   scanf("%d %d", &num1, &min);

   if(num1 == 0 && min == 0){

    break;
   }

    memset(arr, 0, sizeof(arr)); // 루프 건너 뛸 때마다 k와 배열을 0으로 초기화
    k = 0;

   for(int i=1; i<=num1; i++){

    if(num1%i==0){

        arr[k] = i;
        k++;
    }

   }

   if(arr[min] == 0){

    printf("0");
   }

   else{

    printf("%d", arr[min-1]);
   }

}
}
