#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char str1[100];
    int new_str1;
    char str2[100];
    int new_str2;
    int temp1, temp2;
    int max;

    scanf("%s %s", str1, str2);



       temp1 = str1[0];
       str1[0] = str1[2];
       str1[2] = temp1;


    new_str1 = atoi(str1);



       temp2 = str2[0];
       str2[0] = str2[2];
       str2[2] = temp2;




    new_str2 = atoi(str2);


    if(new_str1>new_str2){

        printf("%d", new_str1);
    }

    else{

        printf("%d", new_str2);
    }


    return 0;
}
