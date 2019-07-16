#include <stdio.h>

/* making this a prototype for practice */
int max(int num1, int num2);

int main() {
    printf("\n Checking to see which is larger\n");
    printf("%d is larger\n\n", max(40,10));
    return 0;
}

int max(int num1, int num2) {
    int result;
    if(num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    return result;
}
