CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c18
TARGET = main.out

SRCS = main.c websokekclib.c
OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

all: build run

-include $(DEPS)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

build: $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJS) $(DEPS)
