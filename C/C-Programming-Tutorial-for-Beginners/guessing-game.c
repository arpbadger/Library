#include <stdio.h>
int main() {
	int secret_num = 123;
	int user_guess;
	int guess_count  = 3;

	printf("Welcome to the Game!\n\n3 Guesses Left: Enter Guess   | ");
	scanf("%d", &user_guess);

	while(guess_count >= 0 && user_guess != secret_num){
		guess_count--;
		printf("%d Guesses Left: Enter Guess   | ", guess_count);
		scanf("%d", &user_guess);
	}
	if(user_guess == secret_num){
		printf("\nDing Ding Ding! You got it!");
	} else {
		printf("\n Your out of guesses! Try again");
	}
	return 0;
}
