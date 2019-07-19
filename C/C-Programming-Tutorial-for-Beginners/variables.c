#include <stdio.h>
#include <stdlib.h>

/* Create main funciton */
int main()
{
  char CharacterName[] = "John";
  int CharacterAge = 35;

  /* %s used for characters */
  printf("There once was a man named %s\n", CharacterName);
  printf("he was %d years old\n", CharacterAge);

  /* %d used for integers */
  printf("He liked being named %s\n", CharacterName);
  printf("He did not like being %d years old\n", CharacterAge);

}
