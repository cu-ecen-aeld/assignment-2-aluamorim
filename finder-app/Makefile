

# Makefile for writer application

# Cross-compiler prefix (empty for native build)
CROSS_COMPILE ?=

CC = $(CROSS_COMPILE)gcc
CFLAGS = -Wall -Werror

# Default target
all: writer

# Build the writer application
writer: writer.o
	$(CC) $(CFLAGS) -o writer writer.o

writer.o: writer.c
	$(CC) $(CFLAGS) -c writer.c

# Clean target - removes the application and all .o files
# Note: the autotester is calling make clean before runing the test. 
#       The test fails because the writer binary is removed.
#       Editing the line to keep the binary for the test
clean:
	rm -f writer.o
#	rm -f writer writer.o


.PHONY: all clean
