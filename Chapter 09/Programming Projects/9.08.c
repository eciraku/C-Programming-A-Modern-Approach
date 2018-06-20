#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void)
{
	int dice1, dice2;

	dice1 = (rand() % 6) + 1;
	dice2 = (rand() % 6) + 1;

	return (dice1 + dice2);
}

bool play_game(void)
{
	int roll, point;

	roll = roll_dice();

	printf("You rolled: %d\n", roll);

	if (roll == 7 || roll == 11)
		return true;
	else if (roll == 2 || roll == 3 || roll == 12)
		return false;
	else
	{
		point = roll;
		printf("Your point is %d\n", point);
	}

	roll = roll_dice();
	printf("You rolled: %d\n", roll);
	while(1)
	{
		if(roll == point)
			return true;
		else if (roll == 7)
			return false;
		else 
		{
			roll = roll_dice();
			printf("You rolled: %d\n", roll);
		}
	}

}

int main(int argc, char const *argv[])
{
	int win = 0, lose = 0;
	char again = 'Y';

	srand((unsigned) time(NULL));
	
	while(again == 'y' || again == 'Y')
	{
		if (play_game())
		{
			printf("You win!\n");
			win++;
		}
		else
		{
			printf("You lose!\n");
			lose++;
		}

		printf("\nPlay again? ");
		scanf("%c", &again);
		getchar();
		printf("\n");
	}

	printf("\nWins: %d   Loses: %d\n", win, lose);

	return 0;
}