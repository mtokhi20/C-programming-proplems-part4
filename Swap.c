#include<stdio.h>
void swap(int *num1,int *num2);
void main(void){
    int number1,number2;
    printf("Enter Number1  ");
    scanf("%d",&number1);
    printf("Enter Number2 ");
    scanf("%d",&number2);
    swap(&number1,&number2);
    printf("Number 1 after Swaping %d \n",number1);
    printf("Number 2 after Swaping %d \n",number2);
}
void swap(int *num1,int *num2){
  int temp = *num1;
  *num1=*num2;
  *num2=temp;
}
