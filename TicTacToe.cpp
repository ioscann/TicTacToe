#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int check(int matrix[3][3])
{

	if (matrix[0][0] == 1 && matrix[0][1] == 1 && matrix[0][2] == 1)
	{
		printf("\n1 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][0] == 2 && matrix[0][1] == 2 && matrix[0][2] == 2)
	{
		printf("\n2 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][0] == 1 && matrix[1][0] == 1 && matrix[2][0] == 1)
	{
		printf("\n1 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][0] == 2 && matrix[1][0] == 2 && matrix[2][0] == 2)
	{
		printf("\n2 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][0] == 1 && matrix[1][1] == 1 && matrix[2][2] == 1)
	{
		printf("\n1 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][0] == 2 && matrix[1][1] == 2 && matrix[2][2] == 2)
	{
		printf("\n2 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[1][0] == 1 && matrix[1][1] == 1 && matrix[1][2] == 1)
	{
		printf("\n1 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[1][0] == 2 && matrix[1][1] == 2 && matrix[1][2] == 2)
	{
		printf("\n2 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][1] == 1 && matrix[1][1] == 1 && matrix[2][1] == 1)
	{
		printf("\n1 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][1] == 2 && matrix[1][1] == 2 && matrix[2][1] == 2)
	{
		printf("\n2 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][2] == 1 && matrix[1][2] == 1 && matrix[2][2] == 1)
	{
		printf("\n1 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][2] == 2 && matrix[1][2] == 2 && matrix[2][2] == 2)
	{
		printf("\n2 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][2] == 1 && matrix[1][1] == 1 && matrix[2][0] == 1)
	{
		printf("\n1 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[0][2] == 2 && matrix[1][1] == 2 && matrix[2][0] == 2)
	{
		printf("\n2 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[2][0] == 1 && matrix[2][1] == 1 && matrix[2][2] == 1)
	{
		printf("\n1 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}
	else if (matrix[2][0] == 2 && matrix[2][1] == 2 && matrix[2][2] == 2)
	{
		printf("\n2 karakteri oyunu kazandı. Tebrikler !!!\n");
		system("pause");
		exit(0);
	}

	return 1;
}

int main()
{

	setlocale(LC_ALL, "Turkish");

	int matris[3][3];

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
			matris[i][j] = 0;
			printf(" [  %d   ] ",matris[i][j]);
		}
		printf("\n");
	}

	start:
	printf("\n1. oyuncu hangi karakteri seçmek istersin (x=1/o=2) --> ");
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
		printf("\nSadece 1 veya 2 yazabilirsiniz !!!\n");
		goto start;
	}

	for (int i = 0; i < 9; i++)
	{
	    repeat:
		printf("\n1. oyuncu hangi konuma %d koymak istersin (satır sütun) --> ", player1);
		scanf("%d %d", &row, &column);

		if (row > 3 || row <1 || column < 1 || column > 3)
		{
			printf("\nSınırların dışına çıkamazsın !!!\n");
			goto repeat;
		}
		else
		{	
			if (matris[row - 1][column - 1] == 0)
			{
				matris[row - 1][column - 1] = player1;
				count = count + 1;
				printf("\n");

				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						printf("[  %d  ]", matris[i][j]);
					}
					printf("\n");
				}
			}
			else
			{
				printf("Diğer oyuncu daha önce bu konuma numara koymuş farklı bir konum seç !!!");
				goto repeat;
			}

			check(matris);

			repeat2:
			printf("\n2. oyuncu hangi konuma %d koymak istersin (satır sütun) --> ", player2);
			scanf("%d %d", &row, &column);

			if (row > 3 || row < 1 || column < 1 || column > 3)
			{
				printf("\nSınırların dışına çıkamazsın !!!\n");
				goto repeat2;
			}
			else
			{
				if (matris[row - 1][column - 1] == 0)
				{
					matris[row - 1][column - 1] = player2;
					count = count + 1;
					printf("\n");

					for (int i = 0; i < 3; i++)
					{
						for (int j = 0; j < 3; j++)
						{
							printf("[  %d  ]", matris[i][j]);
						}
						printf("\n");
					}
				}
				else
				{
					printf("Diğer oyuncu daha önce bu konuma numara koymuş farklı bir konum seç !!!");
					goto repeat2;
				}

				check(matris);
			}

			if (count == 9)
			{
				printf("\nBerabere kaldınız. İyi mücadeleydi !!!\n");
				system("pause");
				exit(0);
			}

		}

	}
	
	return 0;
}