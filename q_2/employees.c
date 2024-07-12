#include "employee.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_employee - create and add employees to bin file
 * Return: 0 on success or -1 on error
 */

int create_employee(Employee emp)
{
FILE *file;

file = fopen("employee.bin", "ab");
if (file == NULL)
{
printf("Error opening file\n");
return (-1);
}
fwrite(&emp, sizeof(Employee), 1, file);
fclose(file);
return (0);
}

/**
 * main - creates employees and adds to bin file
 * Return: 0 on success, -1 on error
 */

int main(int argc, char *argv[])
{
int i, n;
Employee emp;
if (argc != 2)
{
printf("Usage: %s <number_of_employees>\n", argv[0]);
return (-1);
}
n = atoi(argv[1]);
for (i = 1; i <= n; i++)
{
printf("Create employee %d:\n", i);
printf("email: ");
scanf("%s", emp.email);
printf("age: ");
scanf("%d", &emp.age);
printf("salary: ");
scanf("%d", &emp.sal);

if (create_employee(emp) == -1)
{
return (-1);
}
}
printf("Employees created and saved!\n");
return (0);
}
