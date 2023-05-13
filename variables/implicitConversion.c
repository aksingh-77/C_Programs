#include<stdio.h>
void main(){
    int x = 10;
    char y = 'a'; //ASCII value of a is 97
    x = x+y;//here a is conerted to its ASCII value 97
    //x = x+y;
    float z = x + 10.0; //here x is conerted to 10;
    printf("Value of x and z is %d and %f",x,z);

    //Output
    //Value of x and z is 107 and 117.000000
}


