#include <memory.h>
#include <string.h>
#include <stdio.h>

char str1[11] = "abcdefghij";

void *memcpyCustom(void *dest, const void *src, size_t n)
{
    char *dp = (char *)dest;
    const char *sp = (char *)src;
    while (n--)
        *dp++ = *sp++;
    return dest;
}

void *memmoveCustom(void *dest, const void *src, size_t n)
{
    unsigned char *pd = (unsigned char *)dest;
    const unsigned char *ps = (unsigned char *)src;
    if ( ps < pd )
        for (pd += n, ps += n; n--;)
            *--pd = *--ps;
    else
        while(n--)
            *pd++ = *ps++;
    return dest;
}

int main( void )
{
    printf( "The string: %s\n", str1 );
    memcpy( str1 + 1, str1, 9 );
    printf( "Actual memcpy output: %s\n", str1 );

    strcpy( str1, "abcdefghij" );   // reset string

    memcpyCustom( str1 + 1, str1, 9 );
    printf( "Implemented memcpy output: %s\n", str1 );

    strcpy( str1, "abcdefghij" );   // reset string

    memmoveCustom( str1 + 1, str1, 9 );
    printf( "Implemented memmove output: %s\n", str1 );
    getchar();
    return (0);
}