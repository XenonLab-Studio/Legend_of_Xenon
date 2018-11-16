# Makefile for The Legend of Xenon
#
# Linux/gcc only; I'm writing this in riceboy-hacker mode.

OBJS=bmagic.o combat.o display.o main.o map.o misc.o monsters.o mon2.o objects.o permobj.o permons.o pmon2.o rng.o u.o vector.o

GAME=the_legend_of_xenon
# MPR: per <lj user="ewx">, users are advised to remove -Werror when
# building on Darwin due to a bug in Darwin's version of "ncurses.h".
#
# It is apparently possible to build this code for Windows 10 (compiler MingGW), although I have no details.
MAJVERS=1
MINVERS=7
CFLAGS=-c -g -Wall -Wstrict-prototypes -Wwrite-strings -Wmissing-prototypes -Wredundant-decls -Wunreachable-code -DMAJVERS=$(MAJVERS) -DMINVERS=$(MINVERS)
LINKFLAGS=-lpanel -lncurses -g

all: $(GAME)

$(GAME): $(OBJS)
	$(CC) $(OBJS) $(LINKFLAGS) -o $(GAME)

archive: clean
	(cd .. && tar cvzf the_legend_of_xenon-$(MAJVERS).$(MINVERS).tar.gz the_legend_of_xenon-$(MAJVERS).$(MINVERS))

clean:
	-rm -f *.o $(GAME) lox.log lox.sav.gz

display.o: display.c lox.h

main.o: main.c combat.h lox.h monsters.h

combat.o: combat.c combat.h lox.h

u.o: u.c combat.h lox.h

permobj.o: permobj.c lox.h

map.o: map.c lox.h

permons.o: permons.c lox.h

pmon2.o: pmon2.c lox.h monsters.h

objects.o: objects.c lox.h

monsters.o: monsters.c lox.h monsters.h

mon2.o: mon2.c lox.h bmagic.h monsters.h

vector.o: vector.c lox.h

bmagic.o: bmagic.c lox.h bmagic.h
