#include "Bool.h"
#include <stdio.h>
#include <stdlib.h>

int mainAux_getNumberOfFixCells(){
	return 0;
}

char* mainAux_readCommand(){
	//scanf
	//strtok
	//Command = parser_checkValidCommand
	//game_playTurn(command)
	return NULL;
}

/* nadin :
 * this function receives the number of fixed cells from user. it should be between 0-80
 */
int mainAux_getNumberOfFixCells(){
	int fixed_cells;
		printf("Please enter the number of cells to fill [0-80]:\n");
		if (scanf("%d", &fixed_cells) != 1)
		{
			printf("Error: scan has failed. Exiting\n");
			return -1;

		}
		while ((fixed_cells >80 || fixed_cells < 0))
		{
			printf("Error: invalid number of cells to fill (should be between 0 and 80)\n");
			printf("Please enter the number of cells to fill [0-80]:\n");
			scanf("%d", &fixed_cells);

		}
		return fixed_cells;
	}


void printBoard(int**matrix){

}
