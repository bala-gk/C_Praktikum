PROGRAM = hs_12

SOURCES.c = hs_12.c
SOURCE.h = hs_12.h

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
	  
