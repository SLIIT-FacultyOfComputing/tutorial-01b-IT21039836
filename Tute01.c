/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int marks1, marks2;
  float total, avg;

   
  printf("enter marks of 1 subjects");
  scanf("%d",&marks1);
  printf("enter marks of 2 subjects");
  scanf("%d",&marks2);

  total = marks1 + marks2;
  avg = total / 2.0;

  printf("The average of two marks is %.2f",avg);
  
  return 0;
}

