#include<stdio.h>
void main(){
    int a,b,temp;
    printf("Enter number 1 ");
    scanf("%d",&a);
    printf("Enter number 2 ");
    scanf("%d",&b);
    printf("1st Number %d \n",a);
    printf("2nd Number %d \n",b);
    temp = a;
    a =b;
    b=temp;
    printf("Number after swap \n");
    printf("1st Number %d\n",a);
    printf("2nd number %d\n",b);

}