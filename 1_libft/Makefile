CC = gcc
CFLAGS = -Wall -Wextra -Werror
#NAME = libft.a
#SRC	= main.c
OBJS = main.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o
#OBJ = $(SRC:%.c=%.o)

#%.o:%.c
#	$(CC) $(CFLAGS) -o $@ $^

libft.a: $(OBJS)
	ar -rv $@ $?

all: $(OBJS)
	$(CC) $(CFLAGS) main.c libft.h ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c -o pruebas

main.o: main.c 
	$(CC) $(CFLAGS) -c main.c

ft_isalpha.o: ft_isalpha.c
	$(CC) $(CFLAGS) -c ft_isalpha.c

ft_isdigit.o: ft_isdigit.c
	$(CC) $(CFLAGS) -c ft_isdigit.c

ft_isalnum.o: ft_isalnum.c
	$(CC) $(CFLAGS) -c ft_isalnum.c

ft_isascii.o: ft_isascii.c
	$(CC) $(CFLAGS) -c ft_isascii.c

ft_isprint.o: ft_isprint.c
	$(CC) $(CFLAGS) -c ft_isprint.c

ft_strlen.o: ft_strlen.c
	$(CC) $(CFLAGS) -c ft_strlen.c

clean: 
	rm *.o 

fclean: clean
	rm libft.a

re: 	fclean all
	