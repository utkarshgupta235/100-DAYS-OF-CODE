//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>

int main(){
int n;
printf("Enter any integer : ");
scanf("%d",&n);

if (n>0)
{
 printf("%d is a positive integer",n);
}
else{
  if (n<0)
  {
    printf("%d is a negative integer",n);
  }
  else{
    printf("The entered value is 0 (zero) .");
  }
}
return 0;
}
