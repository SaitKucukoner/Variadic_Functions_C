#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

char *create_a_string(int n, ...)
{
    int i = 0;
    char *string;

    va_list args;
    va_start(args, n);

    if (!(string = malloc(n + 1)))
        return (NULL);
    while (i < n)
    {
        string[i] = (char)va_arg(args, int);
        i++;
    }
    string[i] = '\0';

    va_end(args);
    return (string);
}

int collect_numbers(int n, ...)
{
    int i = 0;
    int total = 0;

    va_list args;
    va_start(args, n);

    while (i < n)
    {
        total += va_arg(args, int);
        i++;
    }

    va_end(args);
    return (total);
}

int main()
{
    /* char *result = create_a_string(4, 's', 'a', 'i', 't');
      printf("%s\n", result);
      free(result);  */

    // printf("%d\n", collect_numbers(3, 5, 6, 7));
    return (0);
}