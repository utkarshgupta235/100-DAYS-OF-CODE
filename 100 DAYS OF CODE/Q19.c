
//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>

int main(){
  printf("*** TO DETERMINE WHETHER GIVEN SIDES CAN FORM A TRIANGLE OR NOT ***\n");
  int side_1, side_2, side_3;
  printf("enter side 1: ");
  scanf("%d", &side_1);
  printf("enter side 2: ");
  scanf("%d", &side_2);
  printf("enter side 3: ");
  scanf("%d", &side_3);

  if (side_1 + side_2 > side_3 && side_2 + side_3 > side_1 && side_3 + side_1 > side_2)
  {
    printf("The given sides can form a TRIANGLE\n");
  }
  else
  {
    printf("Cannot form a triangle\n");
  }
  
  if(side_1==side_2 && side_2==side_3 && side_1==side_3){
    printf("equilateral triangle\n");
   
  }
  
else if(side_1==side_2 || side_2==side_3 || side_1==side_3){
  printf("isosceles triangle\n");

}
else  {printf("scalene triangle\n");
}
return 0;
}