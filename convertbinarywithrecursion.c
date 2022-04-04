#include<stdio.h>
void bin (int number);
void main(void){
    int number;
    printf("Enter number ");
    scanf("%d",&number);
    bin(number);

}
void bin (int number){
  if (number>0){
    bin(number/2);
    printf("%d",number%2);
  }
 else
    printf("%d",number);
}
