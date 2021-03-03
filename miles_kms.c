
#include <stdio.h>
#define KMS_PER_MILE  1.609//conversion constant 

int main(void){
    double miles,//distance in miles
    kms;//equivalent distance in kilometers

 //generally  before input,we print a prompt message
 printf("Enter the distance in miles: ");
 scanf("%lf",&miles);
 
 //make the conversion
 kms = miles*KMS_PER_MILE;
 
 printf("That equals %f %f kilometers.\n",kms);  
 //place holders-Whenever we have a variable value inside a format string,
 //we use place holders;
 //%d for integers both inside printf and scanf
 //%f for double inside printf
 //%lf for double inside scanf
 //%c for char 
 
 

}
