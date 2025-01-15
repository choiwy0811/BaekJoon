#include <stdio.h>

int main() {

    char str[1000];
    

    scanf("%s", str);

    int k =strlen(str);

    for(int i=0;i<k/2;i++){


        if(str[i]==str[k-1-i]){

        printf("1");

        return 1;
        }



    }
printf("0");

return 0;
}
