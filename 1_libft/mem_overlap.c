#include <string.h>
#include <stdio.h>

int main(void)
{
char str[50];
char str2[50];

strcpy(str,"holakease");
strcpy(str2,"holakease");
memcpy(&str[3],&str[4],7); //might blow up
memmove(&str2[3],&str2[4],7); 
printf("%s\n", str);
printf("%s\n", str2);
return (0);
}