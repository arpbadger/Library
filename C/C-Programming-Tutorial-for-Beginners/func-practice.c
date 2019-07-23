#include <stdio.h>
#include <stdlib.h>

void func1(char name[], int age) {
  printf("\nHello %s\n\nYou are %d\n\n", name, age);
}


int main()
{
  /* char name[] = "Brad"; */
  func1("Mike",12);
  return 0;
}
