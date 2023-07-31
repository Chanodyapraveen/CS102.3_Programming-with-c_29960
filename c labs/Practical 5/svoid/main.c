#include <stdio.h>
#include <stdlib.h>
int main()
{
//x is a variable
  int x=10;
  //pointer
  int*y;
  // memory address of variable x is asssigned to pointer y
  y=&x;
  //show the memory address of variable x
  printf("%p",y);

}
