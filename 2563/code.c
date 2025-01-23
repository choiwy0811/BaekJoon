#include <stdio.h>
#include <string.h>


int main() {

    int num;
    int x, y;
    int square[100][100] = {0,};
    int count = 0;

    scanf("%d", &num);

    for(int i=0;i<num;i++){

        scanf("%d %d", &x, &y);
        for(int j=x;j<x-1+10;j++){

                for(int k=y;k<y-1+10;k++){

                    square[k][j] = 1;
                }

        }
    }

    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){

            if(square[j][i]==1){

                count++;
            }

        }
    }

    printf("%d", count);


}
