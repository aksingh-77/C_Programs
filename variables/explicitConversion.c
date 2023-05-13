#include<stdio.h>
void main(){
    double x = 1.2;
    int sum = (int)x+1; //here is x ix explicitily converted to int where we loss a data of 0.2
    printf("sum = %d",sum);
}