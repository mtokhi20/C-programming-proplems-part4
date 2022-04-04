#include<stdio.h>
int sumOfN(int number);
void main (main){
     int number,res;
     printf("Enter Number ");
     scanf("%d",&number);
     res=sumOfN(number);
     printf("the sumation of natural number till %d is %d \n",number, res);
}
int sumOfN(int number){
  int sum=0;

    if (number !=0)
        sum=number+sumOfN(number-1);
    else
      return number;

    return sum;
}
