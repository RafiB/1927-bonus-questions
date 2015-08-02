CC=gcc
CFLAGS=-Wall -Werror
NAME=rotated-array
DEPS=$(NAME).h
OBJ=$(NAME).o test-$(NAME).o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test-$(NAME): $(OBJ)

clean:
	rm -f $(OBJ) test-$(NAME)
