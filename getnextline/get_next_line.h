# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> 

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

char  *get_next_line(int fd);
void	*ft_calloc(size_t count, size_t size);

