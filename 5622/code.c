#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(char n){

    switch(n){

   case 'A' :
   case 'B' :
   case 'C' :
    return 2;

   case 'D' :
   case 'E' :
   case 'F' :
    return 3;

   case 'G' :
   case 'H' :
   case 'I' :
    return 4;

   case 'J' :
   case 'K' :
   case 'L' :
    return 5;


   case 'M' :
   case 'N' :
   case 'O' :
    return 6;

   case 'P' :
   case 'Q' :
   case 'R' :
   case 'S' :
    return 7;

   case 'T' :
   case 'U' :
   case 'V' :
    return 8;

   case 'W' :
   case 'X' :
   case 'Y' :
   case 'Z' :
    return 9;
    }



}

int main() {

    char str[1000];
    int result = 0;
    int count=0;

    scanf("%s", str);

    for(int i=0; i<strlen(str);i++){

        result = sum(str[i]) + result;

        count++;

    }

    printf("%d", result+count);

    return 0;


}

