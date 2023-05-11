#include<stdio.h>
int g = 10; //gloabal variable could be accessed from anywhere in code
void main(){
    int x = 20; //local variable for method main
    printf("Local Variable value is %d \n",x);
    printf("Global variable value is %d \n",g);

}