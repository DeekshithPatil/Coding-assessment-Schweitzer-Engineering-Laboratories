all: main

main: main.c parse_param.h parse_param.c 
	gcc -Wall -Werror main.c parse_param.c -o main

clean:
	rm -rf *.o main