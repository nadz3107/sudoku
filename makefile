CC = gcc
OBJS = main.o main_aux.o ADT_Error.o Game.o Parcer.o Solver.o 
EXEC = sudoku
COMP_FLAG = -ansi -Wall -Wextra -Werror -pedantic-errors

$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $@
main.o: main.c main_aux.h ADT_Error.h 
	$(CC) $(COMP_FLAG) -c $*.c
main_aux.o: main_aux.c main_aux.h
	$(CC) $(COMP_FLAG) -c $*.c
ADT_Error.o: ADT_Error.c ADT_Error.h
	$(CC) $(COMP_FLAG) -c $*.c
Game.o: Game.c Game.h
	$(CC) $(COMP_FLAG) -c $*.c
Parcer.o: Parcer.c Parcer.h
	$(CC) $(COMP_FLAG) -c $*.c
Solver.o: Solver.c Solver.h
	$(CC) $(COMP_FLAG) -c $*.c
clean:
	rm -f $(OBJS) $(EXEC)
