#include<stdio.h>
void main(){
    int a=10,b=20;
    printf("before swap a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("/nafter swap a=%d b=%d/n",a,b);
}