#include<stdio.h>
void main (){
    printf("\n\ntask3\n");
    float firstangle,secondangle;
    float thirdangle;

    printf("enter the tringle firstangle :");
    scanf("%f",&firstangle);

    printf("enter the tringle secondangle :");
    scanf("%f",&secondangle);

    thirdangle = 180- (firstangle+secondangle);
    printf("tringle thirdangle is : %2f",thirdangle);
    
}