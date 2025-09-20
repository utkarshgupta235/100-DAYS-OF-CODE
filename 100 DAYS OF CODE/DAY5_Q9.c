//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>

int main(){
float principal=1470,rate=3.2,time=2.5;
float simple_interest;
simple_interest=principal*rate*time/100;
printf("Simple Interest is : %f",simple_interest);
return 0;
}
