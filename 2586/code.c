#include <stdio.h>
#include <string.h>


int main() {

    int arr[9][9];
    int max;
    int max_i, max_j;

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){

            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];

    for(int i=0; i<9;i++){
        for(int j=0;j<9;j++){

                if(arr[i][j]>max){

                    max = arr[i][j];
                    max_i = i;
                    max_j = j;
                }

        }
    }

    printf("%d \n", max);
    printf("%d %d", max_i+1, max_j+1);
}
