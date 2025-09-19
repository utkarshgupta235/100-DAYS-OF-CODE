//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include<stdio.h>

int main(){
int day;
printf("Enter day(1-7) : ");
scanf("%d",&day);

switch (day)
{
case 1:
  printf("MONDAY");
  break;

default:
printf("INVALID INPUT");
  break;
  case 2:
  printf("TUESDAY");
  break;
  case 3:
  printf("WEDNESDAY");
  break;
  case 4:
  printf("THURSDAY");
  break;
  case 5:
  printf("FRIDAY");
  break;
  case 6:
  printf("SATURDAY");
  break;
  case 7:
  printf("SUNDAY");
  break;
}
return 0;
}