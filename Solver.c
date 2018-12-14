#include "Solver.h"

void solver_solveBoard(int** mat, int size, int** matNew){

}

void solver_randomize(){

}

void solver_randomizeBacktracking(){

}

/* added by nadin*/
/*
 * this function checks if the value entered in a specific cell is a valid one. if there is the same value in the same row
 * the function returns 0 otherwise it is a legal value and the function returns 1.
 */
int check_row(int **matrixPlay, int row, int col, int checked_value){

int i;
for (i = 0; i< 9; i++) {
	if (i != col)
	{
		if (matrixPlay[row][i] == checked_value)
		{
			return 0;
		}
	}
	return 1;
}
}
/* added by nadin
 *
 * this function checks if the value entered in a specific cell is a valid one. if there is the same value in the same colomn
 * the function returns 0 otherwise it is a legal value and the function returns 1.
 *
 */
int check_col(int **matrixPlay, int row, int col, int checked_value){

int i;
for (i = 0; i< 9; i++)
{
	if (i != row)
	{
		if (matrixPlay[i][col] == checked_value)
		{
			return 0;
		}
	}
	return 1;
}
}

/*
 * added by nadin
 * checks if the number exists in the same block. this function divides the matrix into 9 blocks.
 * first it checks for which block the index belongs and after it iterates over the 9 elements.
 * it returns 1 if value is valid
 *
 *
 */

int checkBlock(int **matrixPlay, int row, int col, int checked_value) {
	int a, b, c, d;
	a = (row / 3) * 3;/* it tells in which block the index is. 0-2 are in block 0. 3-5 in block 2 which start at index 3 and 6-8 in block 3
	that start in index 6. */
	b = (col / 3) * 3; /* the same with the col*/
	for (c = 0; c < 3; c++)
	{ /*  iterates over the elements in the block */
		for (d = 0; d < 3; d++)
		{
			if (matrixPlay[a + c][b + d] == checked_value)
			{
				return 0;
			}
		}
	}
	return 1;

}
/* return whether the value is valid- different from all values in the same row block and column   */

int is_legalvalue(int **matrixPlay, int row, int col, int checked_value){

	if(checked_value==0)
	{
		return 1;
	}
	if(checkBlock(matrixPlay, row, col, checked_value)==0)
	{
		return 0;
	}
	if(check_row(matrixPlay, row, col, checked_value)==0)
	{
		return 0;
	}
	if(check_col(matrixPlay, row, col, checked_value)==0)
	{
		return 0;
	}
	return 1;
}



int determenistic_algo(int **matrixPlay){

	int row, col, number;
	for (row = 0; row < 9; row++)
	{
		for (col = 0; col < 9; col++)
		{
			if ((col == 8) && (row == 8) && (is_legalvalue(matrixPlay, 8, 8,matrixPlay[8][8])==1))
			{
				return 1;
			}
			if (matrixPlay[row][col] == 0)
			{
				for (number = 1; number<= 9; number++)
				{
					if (is_legalvalue(matrixPlay, row, col, number) == 1)
					{
						matrixPlay[row][col] = number;
						if (determenistic_algo(matrixPlay) == 1)
						{
							return 1;
						} else
							{
								matrixPlay[row][col] = 0;
							}
					}
				}
				if (number == 10)
				{
					matrixPlay[row][col] = 0;
					return 0;
				}
			}

			}
		}
		return 0;
	}
