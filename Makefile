all: tools.c tools
tools: tools.c
	$(CC) -Wall -o tools tools.c

tools.c:

install: tools
	cp ./tools /usr/local/bin/tools

uninstall: /usr/local/bin/tools
	rm -vf /usr/local/bin/tools

clean:	tools
	rm -v tools
