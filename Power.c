#include<stdio.h>
int powerfun(int base,int power);
void main(void){

    int base,power,result;
    printf("Enter base ");
    scanf("%d",&base);
    printf("Enter power ");
    scanf("%d",&power);
    result=powerfun(base,power);

    printf(" %d ^ %d  = %d \n",base,power,result);
}
int powerfun(int base,int power){
  if (power==1)
    return base;
  else return base*powerfun(base,power-1);
}
