// guess game version 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100;

int secret_number;

void initialize_number_generator(void);
int  new_secret_number(void);
void read_guesses(int secret_number);

int main(void)
{
	char command;
	int secret_number;
	printf("Guess Number between 1 and 100\n\n" );
	initialize_number_generator();
	do {
		secret_number = new_secret_number();
		printf("A new Number has been chose\n\n");
		read_guesses(secret_number);
		printf("Play again ? (Y/N)");
		scanf_s("%c", &command);

	} while (command == 'y' || command == 'Y');

	return 0;
}
void initialize_number_generator(void)
{
	srand((unsigned)time(NULL));
}
int new_secret_number()
{
	return rand() % MAX_NUMBER + 1;
}
void read_guesses(int secret_number)
{
	int guess, num_guesses = 0;
	for (;;)
	{
		
		printf("Enter number : ");
		scanf_s("%d", &guess);
		if (guess == secret_number)
		{
			printf("You win in %d guesses \n\n ", num_guesses);
			return;
		}
		else if (guess < secret_number)
			printf("higher\n");
		else{
			printf("lower\n");
	}
		num_guesses++;
	}

}
