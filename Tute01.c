/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  //variable declaration
  int a, b ;
  float total , avg ;
  
  //input
  printf("Enter Marks\n");
  scanf("%d" , &a);
  scanf("%d" , &b);

  //Calculations
  total = a + b ;
  avg = total / 2 ;
  
  //output 
  printf("Average is : %.2f" ,avg) ;

  return 0;
}

