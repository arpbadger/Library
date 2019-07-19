#include <stdio.h>

/* making this a prototype for practice */
int max(int num1, int num2);

int max_3(int num1, int num2, int num3);

int main() {
    printf("\n Checking to see which is larger\n");
    printf("%d is larger\n\n", max_3(40,10,100));
    return 0;
}

int max(int num1, int num2) {
    int result;
    if(num1 > num2) {        /* a way to make an if else statent */
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

/* and statements   && */
/* elif statemnets  else if */
/* or statements || */
/* not statements != */
/* negation operator, make a whole statment the opposit
  i.e (3 >2) is True, but ! ( 3 > 2) is false */

int max_3(int num1, int num2, int num3){
  int results;
  if( num1 >= num2 && num1 >= num3){         /* could also use an or statement " || "  */
    results = num1;
  } else if ( num2 >= num1 && num2 >= num3){
    results = num2;
  } else{
    results = num3;
  }
  return results;
}
