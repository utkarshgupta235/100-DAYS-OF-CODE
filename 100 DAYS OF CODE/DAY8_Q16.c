//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>

int main(){
int num1,num2,num3;
printf("Enter 1st number : ");
scanf("%d",&num1);
printf("Enter 2nd number : ");
scanf("%d",&num2);
printf("Enter 3rd number : ");
scanf("%d",&num3);

if (num1>num2) // num2 largest hone ki race se bahar
{
  
  if (num1>num3)
  {
   printf("%d is largest .",num1);
  }
  else{
    printf("%d is largest .",num3);
  }
  
}
else if (num2>num1) // matlab num1 cannot be largest
{
 if (num2>num3)
 {
  printf("%d is largest .",num2);
 }
 else{
  printf("%d is largest .",num3);
 }
}




return 0;
}
