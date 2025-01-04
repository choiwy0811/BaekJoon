#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int n, m;
    int arr[10];
    int i, j;
    int temp;

    printf("Enter the N & M : ");
    scanf("%d %d", &n, &m);

    for(int i=0;i<n;i++){

        arr[i] = i+1;
    }

    for(int k=0;k<m;k++){

       scanf("%d %d", &i, &j);

       for(int c=i-1; c<j; c++){

            temp = arr[c];
            arr[c] = arr[j-1];
            arr[j-1] = temp;
            j--;
       }


    }

    for(int i=0; i<n; i++){

        printf("%d ", arr[i]);
    }

    return 0;
}
