#include <stdio.h>

int main() {

    int arr[6];
    int mal[6] = {1, 1, 2, 2, 2, 8};
    int result[6];

    for(int i=0; i<6; i++){

        scanf("%d", &arr[i]);
    }

    for(int i=0;i<6;i++){

        result[i] = mal[i] - arr[i];

    }

    for(int i=0; i<6; i++){

       printf("%d ", result[i]);

    }



    return 0;
}
