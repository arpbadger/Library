#include <stdio.h>
#include <stdlib.h>

void usage();

int main() {
    char command;

    printf("Enter a Command\n\n");
    scanf("%s", &command);
    printf("%s", &command);
    
    return 0;
}

void usage(){
    printf("Welcome to the program\n\n");
    printf("Usage:\n--s : run script\n--e : exit program\n--f : create file ");
}
