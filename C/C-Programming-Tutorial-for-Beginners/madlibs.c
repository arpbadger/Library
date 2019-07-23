#include <stdio.h>
#include <stdlib.h>

int main()
{
  char color[20] ;                 /* the '20' is how many characters this */
  char pluralNoun[20] ;            /* variable has memory allocation for */
  char celebrityF[20] ;
  char celebrityL[20] ;


  printf("Enter a color");
  scanf("%s", color);             /* accept a string from the user */
  printf("Enter a plural noun");   /* no & needed because were getting a string */
  scanf("%s", pluralNoun);
  printf("Enter a celebrity");
  scanf("%s%s", celebrityF,celebrityL);

  printf("Roses are %s\n", color);
  printf("%s are blue\n", pluralNoun);
  printf("I love %s %s\n", celebrityF,celebrityL);

  return 0;

}
