#ifndef PARCER_H_
#define PARCER_H_

typedef enum {
	SET = 0,
	HINT,
	VALIDATE = 2
} FUNC;

typedef struct command_t{
	FUNC func;
	int X;
	int y;
	int z;
} Command;

ADTErr parser_checkValidCommand(char* str);

#endif
