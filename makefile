CC= gcc
CFLAG= -Wall -I
EXE_NAME= RUN_EXE
FILES= main.o task_func.o

all:$(FILES)
	$(CC) -o $(EXE_NAME) $(FILES) $(CFLAGS)

clean: 
	rm -f *.o

run:
	./$(EXE_NAME)
