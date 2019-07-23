#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int div_func(int num1, int num2);

int main() {
  int command;
  int user_int1;
  int user_int2;
  printf("Welcome to the Calculator\n");
  printf("Do you want to Add, Subtract, Mult, or Divide?");
  printf("\nAdd: 1\nSubtract: 2\nMultiply: 3\nDivide: 4\n");
  scanf("%d", &command);
  printf("What are your two numers");
  scanf("%d%d", &user_int1, &user_int2);
  if(command == 1){
    printf("%d + %d is equal to %d", user_int1, user_int2, add(user_int1,user_int2) );
  } else if ( command == 2) {
    printf("%d + %d is equal to %d", user_int1, user_int2, sub(user_int1,user_int2) );
  } else if ( command == 3) {
    printf("%d + %d is equal to %d", user_int1, user_int2, mult(user_int1,user_int2) );
  } else if ( command == 4) {
    printf("%d + %d is equal to %d", user_int1, user_int2, div_func(user_int1,user_int2) );
  } else {
    printf("\nAdd: 1\nSubtract: 2\nMultiply: 3\nDivide: 4\n");
  }
  return 0;
}

int add(int num1, int num2){
  int result;
  result = num1 + num2;
  return result;
}

int sub(int num1, int num2){
  int result;
  result = num1 - num2;
  return result;
}

int mult(int num1, int num2){
  int result;
  result = num1 * num2;
  return result;
}

int div_func(int num1, int num2){
  int result;
  result = num1 / num2;
  return result;
}
