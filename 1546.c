#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int test;
    int grade[100];
    double new_grade[100];
    int max;
    double sum = 0;

    printf("Enter the test's number : ");
    scanf("%d", &test);

    for(int i=0; i<test; i++){

        scanf("%d", &grade[i]);
    }

    max = grade[0];

    for(int i=1;i<test;i++){

        if(grade[i]>max){

            max = grade[i];
        }
    }

    for(int i=0;i<test;i++){

        new_grade[i] = (double)grade[i] / max * 100;
        sum = sum + new_grade[i];
    }

    printf("%.2f", sum/test);
}
