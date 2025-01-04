#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int arr[50];
    int k[50];
    int count = 0;

   for(int i=0 ;i<10; i++){

    scanf("%d", &arr[i]);

    k[i]=arr[i]%42;
    }

    for(int i=0;i<10;i++){

        for(int j=i+1;j<10;j++){

                if(k[i]==k[j]){

                    count++;
                    break;
                }


        }
    }

    printf("%d", 10-count);
}
