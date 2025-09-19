//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main(){
float celcius,fahrenheit;
printf("Enter the temperature in degree Celcius : ");
scanf("%f",&celcius);
fahrenheit = celcius* 9/5 + 32;
printf("Temperature in degree fahrenheit is : %f",fahrenheit);

return 0;
}