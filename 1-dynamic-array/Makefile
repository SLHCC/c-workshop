CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = dynamic_array
SRCS = Main.c DynamicArray.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del /Q *.o $(TARGET).exe

.PHONY: all clean