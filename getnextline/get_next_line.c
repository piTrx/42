#include "get_next_line.h" 

/* -------------------------------------------------------------------------- */
/* Function to extract a line from the stash.                                 */
/* -------------------------------------------------------------------------- */
char *extract_line(char *stash)
{
   int i;
   char *line;

   i = 0;
   line = ft_calloc(10, sizeof (char));
   while (stash[i] != '\n')
   {
      line[i] = stash[i];
      i++;
   }
   line[i] = '\0';
   return (line);
}

/* -------------------------------------------------------------------------- */
/* Function to obtain the remaining stash.                                    */
/* -------------------------------------------------------------------------- */
char *obtain_remaining(char *stash)
{
   int i;
   char *remaining;

   i = 0;
   remaining = ft_calloc(10, sizeof (char));
   while (stash[i] != '\n')
      i++;
   i++;
   while (stash[i])
   {
      remaining[i] = stash[i];
      i++;
   }
   remaining[i] = '\0';
   return (remaining);
}

/* -------------------------------------------------------------------------- */
/* Function to append the read buffer data to the partial content (line).     */
/* -------------------------------------------------------------------------- */
char *append_buffer(char *stash, char *buffer)
{
 char *temp;

 temp = ft_strjoin(stash, buffer);
 free(stash);
 return (temp);
}

/* -------------------------------------------------------------------------- */
/* Function to read data from the file and append it to partial content.      */
/* -------------------------------------------------------------------------- */
static char *read_from_file(char *stash, int fd)
{
 int   bytes_read;
 char  *buffer;

 buffer = ft_calloc (BUFFER_SIZE + 1, sizeof(char));
 if (buffer == NULL)
  return (NULL);
 bytes_read = 1;
 while (bytes_read > 0)
 {
    bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (bytes_read <= 0)
    {
      free (buffer);
      return (NULL);
    }
    buffer[bytes_read] = '\0';
    stash = append_buffer(stash, buffer);
    if (ft_strchr(stash, '\n'))
      break;
 }
 free (buffer);
 return (stash);
}

/* -------------------------------------------------------------------------- */
/* The get_next_line function to get the next line from the file descriptor.  */
/* -------------------------------------------------------------------------- */
char *get_next_line(int fd)
{
 static char *stash;
 char *line;

 if (fd < 0 || read(fd, NULL, 0) < 0 || BUFFER_SIZE <= 0) 
  return (NULL);
 if (!stash)
    stash = ft_calloc(1, sizeof (char)); 
 if (!ft_strchr(stash, '\n'))
    stash = read_from_file(stash, fd);
 if (!stash)
 {
    free(stash);
    return(NULL);
 }
 line = extract_line(stash);
 stash = obtain_remaining(stash);
 return (line);
}