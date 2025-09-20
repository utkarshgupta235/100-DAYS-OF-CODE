//Write a program to input two numbers and display their sum, difference, product, and quotient

#include<stdio.h>

int main(){

  int num1 , num2 ;
  printf("Enter 1st number : ");
  scanf("%d",&num1);
   printf("Enter 2nd number : ");
  scanf("%d",&num2);
  printf("Sum = %d\n",num1+num2);
   printf("Difference = %d\n",num1-num2);
    printf("Product = %d\n",num1*num2);
     printf("Quotient = %d",num1/num2);
return 0;
}
