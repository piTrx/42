# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> 

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char *extract_line(char *stash);
char *obtain_remaining(char *stash);
char *append_buffer(char *stash, char *buffer);
char  *get_next_line(int fd);

