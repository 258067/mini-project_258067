SNAKE_LADDER=game.exe
DICE_GAME=./src/game.c ./src/dice.c ./src/diceout6.c


$(SNAKE_LADDER):$(DICE_GAME)
	gcc -Iinc $(DICE_GAME) -o game.exe

test.exe:./unity/unity.c ./tests/test.c ./src/dice.c 
	gcc -Iinc -Iunity ./unity/unity.c ./tests/test.c ./src/dice.c -o test.exe

runtest:test.exe
	test.exe

run:$(SNAKE_LADDER)
	$(SNAKE_LADDER)