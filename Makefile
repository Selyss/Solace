# Directories
IDIR = include
ODIR = obj
LDIR = lib
SDIR = src

# Compiler and flags
CC = gcc
CFLAGS = -I$(IDIR) -Wall -Wextra -pedantic -std=c99

# Libraries (if needed)
LIBS = -lm

# Source files and object files
SRCS = $(wildcard $(SDIR)/*.c)
OBJS = $(patsubst $(SDIR)/%.c,$(ODIR)/%.o,$(SRCS))

# Target binary
TARGET = solace

all: $(TARGET)

$(ODIR)/%.o: $(SDIR)/%.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(TARGET)
