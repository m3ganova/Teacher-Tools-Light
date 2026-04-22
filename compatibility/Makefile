all: teachertools.c teachertools
teachertools: teachertools.c
	gcc -Wall -o teachertools teachertools.c

teachertools.c:

install: teachertools
	cp ./teachertools /usr/local/bin/teachertools

uninstall: /usr/local/bin/teachertools
	rm -vf /usr/local/bin/teachertools

clean:	teachertools
	rm -v teachertools
