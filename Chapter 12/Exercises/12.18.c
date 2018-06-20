#include <stdio.h>

int evaluate_position(char *board, int n);

int main(int argc, char const *argv[])
{
	char chess_board[8][8];

	printf("Enter the pieces on the board: \n");
	for (int i = 0; i < 8; ++i)
		for (int j = 0; j < 8; ++j)
			scanf(" %c", &chess_board[i][j]);

	if(evaluate_position(chess_board[0], 8 * 8) > 0)
		printf("\nWhite has the advantage!\n");
	else if(evaluate_position(chess_board[0], 8 * 8) < 0)
		printf("\nBlack has the advantage!\n");
	else
		printf("\nThey are on equal grounds!\n");

	return 0;
}

int evaluate_position(char *board, int n)
{
	int advantage;
	int white_points = 0, black_points = 0;
	char *board_ptr;

	for (board_ptr = board; board_ptr < board + n; board_ptr++)
	{
		switch(*board_ptr)
			{
				case 'Q':
						white_points += 9;
						break;
				case 'R':
						white_points += 5;
						break;
				case 'B':
						white_points += 3;
						break;
				case 'N':
						white_points += 3;
						break;
				case 'P':
						white_points += 1;
						break;

				case 'q':
						black_points += 9;
						break;
				case 'r':
						black_points += 5;
						break;
				case 'b':
						black_points += 3;
						break;
				case 'n':
						black_points += 3;
						break;
				case 'p':
						black_points += 1;
						break;
			}
	}

	advantage = white_points - black_points;

	return advantage; 
}