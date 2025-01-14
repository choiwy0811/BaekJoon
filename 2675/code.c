#include <stdio.h>
#include <string.h>

int main() {

    int test;
    int num;
    char str[1000];

    scanf("%d", &test);

    for(int i = 0; i<test; i++){

        scanf("%d %s", &num, str );

        for(int j=0; j<strlen(str); j++){

            for(int k=0; k<num; k++){

                printf("%c", str[j]);
            }
        }

        printf("\n");

    }



    return 0;
}
