#include <stdio.h>

int main() {


	int age = 30;
	int * pAge = &age; /* pointer */


	double gpa = 3.4;
	char grade = 'A';

	printf("%p", pAge );    /* print out physical memory address */
							/* p stand for pointer */


	/* pointer is a type of data, represents a memory address */



	return 0;
}
