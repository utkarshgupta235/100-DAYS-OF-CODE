//Write a program to swap two numbers using a third variable.


#include <stdio.h>

int main() {
    int num1, num2, chan;

    
    printf("Enter two integers: ");
    
   
    scanf("%d %d", &num1, &num2);

   
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    
    chan = num1;   
    num1 = num2;   
    num2 = chan;   

    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
