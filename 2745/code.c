#include <stdio.h>
#include <string.h>
#include <math.h>



int main() {

    char arr[100];
    int num;
    int sum = 0;
    int digit;
    int new_number;

    scanf("%s %d", arr, &num);

    for(int i=0; i<strlen(arr); i++){

        if(arr[i]>='0' && arr[i]<='9'){

            digit = arr[i] - '0';
        }

        else{

            digit = arr[i] -'A' + 10;
        }

         new_number = digit*pow(num, i);
        sum = sum + new_number;
    }

    printf("%d", sum);
}
