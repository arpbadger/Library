#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

int function1()
{
  int function_name = 1;
  printf("This is Function :%d\n\n",function_name);
  return 0;
}

int function2()
{
  int function_name = 2;
  printf("This is Function :%d\n\n",function_name);
  return 0;
}

int main()
{
  function1();
  function2();
  return 0;
}
