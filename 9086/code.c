#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   char alp[1000] ;
   int num;
   int start, end;
   int end_num;


   scanf("%d", &num);

   for(int i=0;i<num ; i++){

    scanf("%s", alp);
    end_num= strlen(alp);
    start = alp[0];
    end = alp[end_num-1];

    printf("%c%c \n", start, end);


   }

   return 0;
}
