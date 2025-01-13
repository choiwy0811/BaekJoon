#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
  
  int arr[26];
  char str[1000];
  int n;
  
  scanf("%s", str);
  
  for(int i=0; i<26; i++){
    
    arr[i] = -1;
  }
  
  for(int i=0; i<strlen(str);i++){
    
    n = str[i] - 'a';
    
    if(arr[n] == -1){
        
        arr[n] = i;
    }
  }



     return 0;
}
