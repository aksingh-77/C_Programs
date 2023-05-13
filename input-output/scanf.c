#include<stdio.h>
void main(){
    int num;
    char ch;
    float f;

    printf("Enter any float number ");
    scanf("%f",&f);
    printf("Entered float number is %f \n", f);

    
    printf("Enter any integer number ");
    scanf("%d",&num);
    printf("Entered integer number is %d \n",num);
 
    
    printf("Enter any character ");
    while((getchar())!='\n');
    scanf("%c",&ch);
    printf("Entered character is %c \n",ch);
    

}