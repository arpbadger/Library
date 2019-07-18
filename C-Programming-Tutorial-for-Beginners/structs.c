#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* structs allow you to store many different  types of data next to each other */

struct Student{              /* typically a capital  */
	char name[50];
	char major[50];
	int age;
	double gpa;
};

int main() {

	struct Student student1;
	student1.age = 25;
	student1.gpa = 3.9;
	strcpy( student1.name, "Jason");
	strcpy( student1.major, "Science");
	/* student1.name = 'Jason';     You cant do this */

	struct Student student2;
	student1.age = 29;
	student1.gpa = 3.7;
	strcpy( student1.name, "Bill");
	strcpy( student1.major, "Art");
	/* student1.name = 'Jason';     You cant do this */

	printf("Student 1 Information\n");
	printf("Name is %s\n", student1.name);
	printf("GPA is %lf\n\n", student1.gpa);

	printf("Student 2 Information\n");
	printf("Name is %s\n", student2.name);
	printf("GPA is %lf\n", student2.gpa);

	return 0;
}
