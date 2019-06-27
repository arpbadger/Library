/* Includes section is the top of the c program and holds the libraries and modules needed */
#include <stdio.h>
#include <stdlib.h>

int variables_examples()
{
  /* numbers */
  int age = 5;                   /* use int for whole numebrs */
  double gpa = 3.7               /* use doubles for decimals */

  /* characters */
  char grade = 'A';              /* use char for one single character, use single quotes */
  char phrase[] = "ABCD";        /* use char[] for a string, use double quotes */
  return 0;
}

int printing_examples()
{
  char print_grade = 'A';
  double print_gpa = 3.66;
  int print_age = 34;
  /* printf */
  printf("Hello World\n\n")          /* print 'Hello World' tp to the console */
  printf("My grade is: $s", print_grade);     /* use %s to use a character */
  printf("My GPA is: $f", print_gpa);     /* use %f to use a decimal */
  printf("My teacher's age is: $d", print_age);     /* use %d to use an integer */
  return 0;
}

int numbers_examples()
{
  /* multiplication */
  printf( 5 + 5);
  printf()

  /* math inttions */
  pow(2,3) /* raise the first number raised to the second number */
  sqrt(36) /* square ropt */


}

int constants_examples() /* creating values that can't be changed */
{
  int num = 5;
  printf("%d\n", num);
  num = 8;
  printf("d\n", num );

  const int NOCHANGE_NUM = 5; /* developers typically make constants in all caps like NUM */
  return 0;
}

/* https://youtu.be/KJgsSFOSQv0?t=3647 */
int get_user_input() /* getting user input in c */
{
  int age;
  printf("Enter Age\n");
  scanf("%d", &age);  /* you must use an & before variable to get info fromuser */
  printf("You are %d", age);

  /* get a character from the user */
  char grade;
  printf("Enter grade:")
  scanf("%c", &grade);
  print("Hello $s", grade)

  /* get a double from the user */
  char gpa;
  printf("Enter gpa");
  scanf("%lf", &gpa);
  printf("Your GPA: %f")


}

/* https://youtu.be/KJgsSFOSQv0?t=5761 */
int creating_arrays()
{
  int my_array[] = { 4, 8, 12}   /* create an array */
  printf("%d", my_array[0])

  int another_array[10];        /* define a specfic size for array */
  another_array[0] = 10;
}

void creating_functions(){      /* need to declare return type */
  printf("Hello User");         /* void means no return expected */
}
/* must include a main function */
int main()
{
  variable_examples()
  functions_examples()
  return 0;
}
