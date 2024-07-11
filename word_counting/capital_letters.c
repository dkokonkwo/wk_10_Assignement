#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * _uppercase - rewrites text in uppercase from input file
 * @f: input file
 */

void _uppercase(FILE *f)
{
char c;
char temp;
while ((c = fgetc(f)) != EOF)
{
if (c >= 'a' && c <= 'z')
{
temp = c - 'a' + 'A';
fseek(f, -1, SEEK_CUR);
fputc(temp, f);
}
}
}

/**
 * main - run _uppercase function
 * Return 0 or -1
 */

int main(void)
{
FILE *update = fopen("lorem2.txt", "r+");
if (update == NULL)
{
printf("Error opening file");
return (-1);
}
_uppercase(update);
fclose(update);
return (0);
}
