//sizeof is compile time operator
#include<stdio.h>
void main(){
    int x = 1;
    float y= sizeof(x++);
    printf("Size of operator is %f \n",y);
    printf("Value of x is %d",x);

}