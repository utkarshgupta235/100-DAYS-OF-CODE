//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>

int main(){
int year;
printf("Enter any Year : ");
scanf("%d",&year);

if (year%400==0)
{
  printf("%d is a Leap Year .",year);
}
else{
  if (year%4==0 && year%100!=0)
  {
    printf("%d is  a Leap Year .",year);
  }
  else{
    printf("%d is not a Leap Year .",year);
  }
  
}
return 0;
}