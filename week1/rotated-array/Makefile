CC=gcc
CFLAGS=-Wall -Werror
NAME=rotated-array
DEPS=$(NAME).h
OBJ=$(NAME).o test-$(NAME).o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test-$(NAME): $(OBJ)

tests:
	./test-$(NAME)

clean:
	rm -f $(OBJ) test-$(NAME)
