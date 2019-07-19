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

void test_func(){
    int blank_variable;
    char list_variable[] = {1, 2, 3};
    
    prinft("This is a test func\n\n");
    printf("Im using a new keyboard to test this fucntion\n\n");

}