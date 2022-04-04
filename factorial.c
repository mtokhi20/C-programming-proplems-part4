#include<stdio.h>
int fact(int number);
void main (main){
     int number,res;
     printf("Enter Number  ");
     scanf("%d",&number);
     res=fact(number);
     printf(" the result of %d ! = %d \n", number,res);
}
int fact(int number){
  if (number==0)
    return 1;
  else
     return (number*fact(number-1));
}
