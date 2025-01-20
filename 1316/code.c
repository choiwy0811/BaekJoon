#include <stdio.h>
#include <string.h>


int new_alphabet(char *str){

char prev = '\0';
int visited[26] = {0};

for(int i=0;i<strlen(str);i++){

        if(str[i] != prev){

            if(visited[str[i]-'a']==1){

                return 0;
            }
        }

    visited[str[i]-'a']==1;
    prev = str[i];
}

  return 1;
}




int main() {

    int num;
    char str[101];
    int count=0;

    scanf("%d", &num);

    for(int i=0; i<num; i++){

            scanf("%s", str);

        if(new_alphabet(str)==1){

            count++;
        }
    }


  printf("%d", count);
}
