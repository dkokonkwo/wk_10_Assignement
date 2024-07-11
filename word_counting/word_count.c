#include <stdio.h>
#include <ctype.h>
/**
 * word_count - counts num of words in file
 * @f: input file
 * Return: total number of words
 */

int word_count(FILE *f)
{
int count = 0;
int in_word = 0;
char c;
while ((c = fgetc(f)) != EOF)
{
if (isspace(c))
{
if (in_word)
{
count++;
in_word = 0;
}
}
else
{
in_word = 1;
}
}
return count;
}

/**
 * main - check word_count function
 * Return: 0 on success or 1 on error
 */

int main(void)
{
int words = 0;
FILE *rfile = fopen("lorem2.txt", "r");
if (rfile == NULL)
{
printf("failed to open file");
return (1);
}
words += word_count(rfile);
printf("%d\n", words);
fclose(rfile);
return (0);
}
