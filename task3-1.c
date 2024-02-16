#include<stdio.h>
void main(){

    printf("Fahrenheit\n");
    float celsius,Fahrenheit;

    printf("enter the tempretaure in celsius: ");
    scanf("%f",&celsius);

    Fahrenheit = (celsius * 9/5) + 32;
    printf("the temprature in fahrenheit : %.2f",Fahrenheit);



}