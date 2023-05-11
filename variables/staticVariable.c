//Static Variable matlab ek bar value change hone k baad vhoi(updated) value store rahegi uss variable me.
#include<stdio.h>
void function(){
    int x =10;
    static int y =10;
    x = x+10;
    y=y+10;
    printf("Value of x and y is %d and %d \n",x,y);

}
void main(){
    function(); //function call 1st time
    function(); //function call 2nd time
    function(); //function call 3rd time
}