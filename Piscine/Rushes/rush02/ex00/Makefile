$(CC) = gcc -Wall -Wextra -Werror
rush-02: main.o read_dict.o write_number.o ft_split.o ft_itoc.o
	$(CC) main.c read_dict.c write_number.c ft_split.c ft_itoc.c -o rush-02

main.o: main.c 
	$(CC) -c main.c

read_dict.o: read_dict.c
	$(CC) -c read_dict.c

write_number.o: write_number.c
	$(CC) -c write_number.c

ft_split.o: ft_split.c
	$(CC) -c ft_split.c

ft_itoc.o: ft_itoc.c
	$(CC) -c ft_itoc.c

clean: 
	rm *.o 

fclean: 
	rm *.dict