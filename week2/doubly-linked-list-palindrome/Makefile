CC=gcc
CFLAGS=-Wall -Werror -g
NAME=doubly-linked-list-palindrome
DEPS=$(NAME).h
OBJ=$(NAME).o test-$(NAME).o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test-$(NAME): $(OBJ)

tests:
	./test-$(NAME)

tidy:
	rm -f $(OBJ)

clean:
	rm -f $(OBJ) test-$(NAME)
