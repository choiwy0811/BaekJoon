#include <stdio.h>
#include <string.h>


double average(char* grade){ // 문자열 매개변수로 받을 때에는 *포인터 사용

    double num1 = -1.0;


    if(strcmp(grade,"A+")==0){  //문자열에서는 ''가 아닌 ""

        num1 = 4.5;
    }

    else if(strcmp(grade, "A0")==0){

        num1 = 4.0;
    }
    else if(strcmp(grade, "B+")==0){

        num1 = 3.5;
    }
    else if(strcmp(grade, "B0")==0){

        num1 = 3.0;
    }
    else if(strcmp(grade, "C+")==0){

        num1 = 2.5;
    }
    else if(strcmp(grade, "C0")==0){

        num1 = 2.0;
    }
    else if(strcmp(grade, "D+")==0){

        num1 = 1.5;
    }
    else if(strcmp(grade, "D0")==0){

        num1 = 1.0;
    }
    else if(strcmp(grade, "F")==0){

        num1 = 0.0;
    }
    else if(strcmp(grade, "P")==0){

        num1 = -1.0;
    }


  return num1;



}




int main() {

    char subject[100];
    char grade[5];
    double num;
    double sum = 0.0;
    double sum_average;
    double weight = 0.0;




    for(int i=0; i<20; i++){

        scanf("%s %lf %s", subject, &num, grade);
        if(average(grade)>=0){
        double score = average(grade) * num;

        sum = sum + score;
        weight = weight + num;

    }
    }
    sum_average = sum / weight;

    printf("%.5f", sum_average);
}
