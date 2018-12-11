#ifndef ADTERROR_H_
#define ADTERROR_H_

typedef enum
{
    /* General ADT Errors */
    ERR_OK                            =0,
    ERR_GENERAL,
    ERR_NOT_INITIALIZED,
    ERR_ALLOCATION_FAILED,
    ERR_REALLOCATION_FAILED,
    ERR_UNDERFLOW,
    ERR_OVERFLOW,
    ERR_WRONG_INDEX,

    /* Vector Errors */

    /* Stack  Errors */
    ERR_STACK_BLABLABLA = 15
    /* LinkedList  Errors */


    /* Bit Vector*/


} ADTErr;

void HandleErr(ADTErr errNum);

#endif /*ADTERROR_H_*/
