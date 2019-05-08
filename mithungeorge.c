#include <stdio.h>
#include <stdint.h>
int main()
{
  int row, c;
 printf("This is going to print a triangle pattern")
  
  for (row = 1; row <= 5; row++)  // Loop to print rows
  {
    for (c = 1; c < 5; c++)  // Loop to print spaces in a row
      printf(" ");
 
    s--;
 
    for (c = 1; c <= 2*row - 1; c++) // Loop to print stars in a row
      printf("*");
 
    printf("\n");
  }
 
  return 0;
}
