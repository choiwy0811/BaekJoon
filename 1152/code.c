#include <stdio.h>
#include <string.h>

int main() {

    int num;
    char str[1000];
    int count = 0;

    scanf("%[^\n]", str);

    for(int i=0; i<strlen(str);i++){

        if(str[i] == ' '){

            count++;
            continue;
        }
    }

    printf("%d", count+1);

    return 0;
}
