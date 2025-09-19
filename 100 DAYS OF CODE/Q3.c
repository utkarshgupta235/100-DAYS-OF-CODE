//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>

int main(){
int length=3 , breadth=5 ;
int area,perimeter;
perimeter=2*(length+breadth);
area=length*breadth;
printf("Perimeter of the Rectangle is : %d\n",perimeter);
printf("Area of the Rectangle is : %d",area);
return 0;
}