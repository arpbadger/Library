#include <stdio.h>
#include <stdlib.h>


// A simple program to practice switch statements //
// switch statements allows us to compare one value to many //

// takes a letter grade and tells you if you did well //

int main() {
	char grade;
	printf("Enter your Grade\n\n");
	scanf("%s", &grade);
	printf("Checking how you did....\n\n");

	switch(grade){
	case 'A' :
		printf("Good Job!\n");
		break;                           // tells switch statement we want to exit //
	case 'B' :
		printf("You did okay!\n");
		break;
	case 'C' :
		printf("You need to Study!\n");
		break;
	case 'F' :
		printf("You suck\n");
		break;
	default :
		printf("{!} Error: Invalid Grade Entered");
	}

	return 0;
}
