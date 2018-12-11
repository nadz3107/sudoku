
#include <stdio.h>
#include <stdlib.h>
#include "ADT_Error.h"

 void HandleErr(ADTErr errNum)
{
	 char* ad[]=
	{
		/* General ADT Errors */
		"ERR_OK",
		"ERR_GENERAL",
		"ERR_NOT_INITIALIZED",
		"ERR_ALLOCATION_FAILED",
		"ERR_REALLOCATION_FAILED",
		"ERR_UNDERFLOW",
		"ERR_OVERFLOW",
		"ERR_WRONG_INDEX",
		" ",
		" ",
		" ",
		" ",
		" ",
		" ",

		/* Vector Errors */

		/* Stack  Errors */
		"ERR_STACK_BLABLABLA",
		/* LinkedList  Errors */


		/* Bit Vector*/
	};
	printf("ErrNum=%d, ErrDescription=%s \n",errNum, ad[errNum]);
}

