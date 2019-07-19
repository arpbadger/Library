#include <stdio.h>
#include <stdlib.h>



int main() {
	int index = 1;


	while(index <= 5) {
		printf("Value of Index is %d\n", index);
		index++;                                         /* the same thing as += in python  */
	}



	/* do while loop
	  first thing it does is execute code first
	 */

	do {
		printf("Value of Index is %d\n", index);
		index++;
	}while(index <= 8);


	printf("You've left the loop");
	return 0;
}
