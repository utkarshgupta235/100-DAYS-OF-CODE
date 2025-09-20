//Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>

int main(){
int n;
printf("Enter any integer : ");
scanf("%d",&n);

if (n%2==0)
{
 printf("%d is an even integer",n);
}
else if (n%2!=0)
{
  printf("%d is an odd integer",n);
}


return 0;
}
