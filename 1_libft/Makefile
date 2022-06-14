$(CC) = gcc -Wall -Wextra -Werror
libft.a: main.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o
	$(CC) main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c -o libft.a

main.o: main.c 
	$(CC) -c main.c

ft_isalpha.o: ft_isalpha.c
	$(CC) -c ft_isalpha.c

ft_isdigit.o: ft_isdigit.c
	$(CC) -c ft_isdigit.c

ft_isalnum.o: ft_isalnum.c ft_isalpha.c ft_isdigit.c
	$(CC) -c ft_isalnum.c

ft_isascii.o: ft_isascii.c
	$(CC) -c ft_isascii.c

ft_isprint.o: ft_isprint.c
	$(CC) -c ft_isprint.c

ft_strlen.o: ft_strlen.c
	$(CC) -c ft_strlen.c

clean: 
	rm *.o 

fclean: 
	