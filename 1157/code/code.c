#include <stdio.h>


int main() {

   char str[1000];
   int count[26] = {0};
   char result;

   scanf("%s", str);

   int len = strlen(str);

   for(int i=0; i<len; i++){

       if(str[i]>='a' && str[i]<='z'){

           str[i] = str[i] - 'a' + 'A';
       }

       count[str[i]-'A']++;

   }

   int max = 0;

   for(int i=0; i<26; i++){

    if(count[i]>max){

       max = count[i];
       result = i + 'A';
    }

    else if(count[i]==max){

        result = '?';
    }

   }

   printf("%c", result);

}
