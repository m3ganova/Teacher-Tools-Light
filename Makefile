tools: tools.c
	gcc -Wall -o tools tools.c

tools.c: 

clean:	tools
	rm -v tools
