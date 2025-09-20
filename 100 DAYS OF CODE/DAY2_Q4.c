// Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>

int main(){
float radius =7 , circumference , area ;
float pi=3.14;
circumference=2*pi*radius;
area=pi*radius*radius;
printf("Cicumference of the circle is : %f\n",circumference);
printf("Area of the circle is : %f",area);


return 0;
}
