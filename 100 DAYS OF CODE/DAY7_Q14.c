// Write a program to input a character and check whether it is a vowel or consonant using if–else

#include<stdio.h>

int main(){
char c  ;
printf("Enter any alphabet only : ");
scanf("%c",&c);

if ((c=='a' || c=='A') || (c=='e' || c=='E') || (c=='i' || c=='I') || (c=='o' || c=='O') || (c=='u' || c=='U'))
{
 printf("%c is a vowel",c);
}
else{
  printf("%c is a constant",c);
}
return 0;
}
