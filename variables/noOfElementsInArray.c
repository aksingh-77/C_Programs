//This will give eg 
//how to find no. of elements in array
//using sizeof operator
#include<stdio.h>
void main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,98,7,6,55,45,66};
    printf("Number of elements in array is %lu \n",sizeof(arr)/sizeof(arr[0]));

}