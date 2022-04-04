#include<stdio.h>
int isprime(int number);
void main(void){
    int number,prime;
    printf("Enter Number ");
    scanf("%d ",&number);
    prime=isprime(number);
    if (prime==1)
        printf("%d is prime number \n",number);
    else
        printf("%d is not prime number \n",number);
}
int isprime(int number){
 int i,prime =1;

 for (i=2;i<number;i++){
    if (number%i==0){
        prime =0;
        break;
        }
 }

 return prime;
}
