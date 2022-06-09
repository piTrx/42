#ifndef FUNCTIONS
# define FUNCTIONS

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

int	    write_number(char *str, char *to_find);
int     read_dict(char my_dict[4096]);
char    *ft_strncpy(char *dest, char *src, int n);
int     ft_atoi(char *str);
int    *ft_split(char *nbr);

#endif
