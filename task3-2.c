#include<stdio.h>
void main(){
    printf("\n\ntask2\n");
    float bs,hra,da,ta;
    float gs;

    printf("enter the base salary:");
    scanf("%f",&bs);

    printf("enter the base salary:");
    scanf("%f",&hra);

    printf("enter the base salary:");
    scanf("%f",&da);

    printf("enter the base salary:");
    scanf("%f",&ta);

    gs = bs+hra+da+ta;
    printf("gross salary Rs: %.2f",gs);
}