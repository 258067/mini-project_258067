CC = gcc
CFLAGS = -Wall -g

INC = -Iinc -Iunity
LINK = -lm

UNITY_SRC = unity/unity.c

PROJECT = snakeandladder
SRC = $(wildcard src/*.c)
MAIN = main.c

ifeq ($(OS),Windows_NT)
	RM = rm
	EXEC = $(PROJECT).out
	exeEXEC_TEST = tests/test_$(PROJECT).out

else
	RM = rm
	EXEC = $(PROJECT).out
	EXEC_TEST = tests/test_$(PROJECT).out

endif 
 $(EXEC) : $(SRC) $(MAIN)
	$(CC) $(CFLAGS) $(INC) $^ -o $@ $(LINK)

run : $(EXEC)
	./$(EXEC)

clean:
	$(RM) $(EXEC)

valgrind: $(EXEC) 
	valgrind ./$(EXEC)

$(EXEC_TEST): $(UNITY_SRC) $(SRC) tests/tests.c
	$(CC) $(CFLAGS) $(INC) $^ -o $@ $(LINK)

runtests: $(EXEC_TEST)
	./$(EXEC_TEST)