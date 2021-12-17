#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int check(int matrix[3][3])
{

	if (matrix[0][0] == 1 && matrix[0][1] == 1 && matrix[0][2] == 1)
	{
		printf("\n'1' character won the game. congratulations !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][0] == 2 && matrix[0][1] == 2 && matrix[0][2] == 2)
	{
		printf("\n'2' character won the game congratulations !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][0] == 1 && matrix[1][0] == 1 && matrix[2][0] == 1)
	{
		printf("\n'1' character won the game. congratulations !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][0] == 2 && matrix[1][0] == 2 && matrix[2][0] == 2)
	{
		printf("\n'2' character won the game. congratulations !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][0] == 1 && matrix[1][1] == 1 && matrix[2][2] == 1)
	{
		printf("\n'1' character won the game. congratulations !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][0] == 2 && matrix[1][1] == 2 && matrix[2][2] == 2)
	{
		printf("\n'2' character won the game. congratulations !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[1][0] == 1 && matrix[1][1] == 1 && matrix[1][2] == 1)
	{
		printf("\n'1' character won the game. congratulations !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[1][0] == 2 && matrix[1][1] == 2 && matrix[1][2] == 2)
	{
		printf("\n'2' character won the game. congratulations !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][1] == 1 && matrix[1][1] == 1 && matrix[2][1] == 1)
	{
		printf("\n'1' character won the game. congratulations !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][1] == 2 && matrix[1][1] == 2 && matrix[2][1] == 2)
	{
		printf("\n'2' character won the game. congratulations !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][2] == 1 && matrix[1][2] == 1 && matrix[2][2] == 1)
	{
		printf("\n'1' character won the game. congratulations !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][2] == 2 && matrix[1][2] == 2 && matrix[2][2] == 2)
	{
		printf("\n'2' character won the game. congratulations !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][2] == 1 && matrix[1][1] == 1 && matrix[2][0] == 1)
	{
		printf("\n'1' character won the game. congratulations  !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][2] == 2 && matrix[1][1] == 2 && matrix[2][0] == 2)
	{
		printf("\n'2' character won the game. congratulations !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[2][0] == 1 && matrix[2][1] == 1 && matrix[2][2] == 1)
	{
		printf("\n'1' character won the game. congratulations !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[2][0] == 2 && matrix[2][1] == 2 && matrix[2][2] == 2)
	{
		printf("\n'2' character won the game. congratulations !!!\n");
		system("pause");
		exit(0);
	}

	return 1;
}

int main()
{

	setlocale(LC_ALL, "Turkish");

	int matrix[3][3];

	int x = 1;
	int o = 2;
	int row;
	int column;
	int selectedCharacter;
	int player1;
	int player2;
	int count = 0;;

	printf("******* TIC-TAC-TOE ******* \n\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = 0;
			printf(" [  %d   ] ",matrix[i][j]);
		}
		printf("\n");
	}

	start:
	printf("\nWhich character does player 1 want to choose? (x=1/o=2) --> ");
	scanf("%d", &selectedCharacter);
	
	if (selectedCharacter == 1)
	{
		player1 = x;
		player2 = o;
	}
	else
	{
		player1 = o;
		player2 = x;
	}
	
	if (selectedCharacter > 2 || selectedCharacter < 1)
	{
		printf("\nYou can only write 1 or 2 !!!\n");
		goto start;
	}

	for (int i = 0; i < 9; i++)
	{
	    repeat:
		printf("\nWhich position does player 1 want to put 1 in ? (row column) --> ", player1);
		scanf("%d %d", &row, &column);

		if (row > 3 || row <1 || column < 1 || column > 3)
		{
			printf("\nyou can't go out of border !!!\n");
			goto repeat;
		}
		else
		{	
			if (matrix[row - 1][column - 1] == 0)
			{
				matrix[row - 1][column - 1] = player1;
				count = count + 1;
				printf("\n");

				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						printf("[  %d  ]", matrix[i][j]);
					}
					printf("\n");
				}
			}
			else
			{
				printf("Select a different position, where the player 2 has already numbered this position !!!");
				goto repeat;
			}

			check(matrix);

			repeat2:
			printf("\nWhich position does player 2 want to put 2 in ? (row column) --> ", player2);
			scanf("%d %d", &row, &column);

			if (row > 3 || row < 1 || column < 1 || column > 3)
			{
				printf("\nnyou can't go out of border !!!\n");
				goto repeat2;
			}
			else
			{
				if (matrix[row - 1][column - 1] == 0)
				{
					matrix[row - 1][column - 1] = player2;
					count = count + 1;
					printf("\n");

					for (int i = 0; i < 3; i++)
					{
						for (int j = 0; j < 3; j++)
						{
							printf("[  %d  ]", matrix[i][j]);
						}
						printf("\n");
					}
				}
				else
				{
					printf("Select a different position, where the player 2 has already numbered this position !!!");
					goto repeat2;
				}

				check(matrix);
			}

			if (count == 9)
			{
				printf("\nDRAW, GOOD GAME !!!\n");
				system("pause");
				exit(0);
			}

		}

	}
	
	return 0;
}