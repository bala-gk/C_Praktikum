PROGRAM = ausgabe

SOURCES.c = ausgabe.c
SOURCE.h = ausgabe.h

SOURCES = \
	  $(SOURCES.h) \
	  $(SOURCES.c)

OBJECTS = \
	  $(SOURCES.c:%.c%=%.o)

CC = gcc

CFLAGS = -std=c99 -O3 -Wall -Wconversion -Wfatal-errors
LDLIBS = -lm

all:		$(PROGRAM)

$(PROGRAM): $(SOURCES.c) $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS) $(LDLIBS)

clean:
	rm -rf $(PROGRAM)

run:
	./$(PROGRAM)
	  
