#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
  int num;
  int arr[1000];
  char tem[1000];
  int sum=0;

  scanf("%d", &num);
  scanf("%s", tem);

  for(int i=0; i<num;i++){

    arr[i] = tem[i] - '0';
    sum = sum + arr[i];
  }

  printf("%d", sum);


     return 0;
}
