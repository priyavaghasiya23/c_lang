#include<stdio.h>
void main(){
    int var1,var2,temp;
    printf("enter two intigers/n");
    scanf("%d%d",&var1,&var2);
    printf("before swappingn fist varibale = %d second varibale = %d \n",var1,var2);
    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("after swappingn fist vaibale = %d second varibale = %d/n",var1,var2);
    
}