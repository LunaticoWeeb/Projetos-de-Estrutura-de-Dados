MAIN=pokedex.c
BINARY=pokedex

all:
	gcc -Wall -g $(MAIN) -o $(BINARY) -lm

run:
	./$(BINARY)
	
debug:
	gcc -DDEBUG -Wall $(MAIN) -o $(BINARY)

valgrind:
	valgrind --tool=memcheck --leak-check=full  --track-origins=yes --show-leak-kinds=all --show-reachable=yes ./$(BINARY)

zip:
	zip entrega.zip *.c *.h Makefile

clean:
	@rm *.o