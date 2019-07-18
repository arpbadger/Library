#include <stdio.h>
#include <stdlib.h>

/* creating files  */

int main() {

	FILE * fpointer = fopen("test.txt", "w");

	fprintf(fpointer,"This is a test of the fprintf function");

	fclose(fpointer);
	return 0;
}


/* file modes
 *
 * r : read
 * w : write
 * a: append
 *
 */
