#include <stdio.h>
#include <string.h>



int main() {

   char str[1000];

   scanf("%s", str);
   int len = strlen(str);
   int count = strlen(str);

   for(int i=0; i<len; i++){

    if(str[i] == '='){

        if(i>0 && (str[i-1] == 'c' || str[i-1] == 's')){

            count --;
        }
        else if(i>1 && (str[i-1] == 'z' && str[i-2] == 'd')){

            count = count -2;
        }
        else if(i>0 && str[i-1] == 'z'){

            count--;
        }
    }

    else if(str[i] == '-'){

        if(str[i-1]=='c' || str[i-1]=='d'){

            count--;
        }
    }

    else if((str[i]=='l' && str[i+1] == 'j') || (str[i]=='n' && str[i+1] == 'j')){

        count--;
    }

   }

   printf("%d", count);

}
