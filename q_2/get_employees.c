#include "employee.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_employee - reads and prints employee details from bin file
 * Return: 0 on success, -1 on error
 */

int read_employees(void)
{
FILE *file;
Employee emp;

file = fopen("employee.bin", "rb");
if (file == NULL)
{
printf("Error opening file\n");
return (-1);
}

while(fread(&emp, sizeof(Employee), 1, file))
{
printf("Email: %s, Age: %d, Salary: %d\n", emp.email, emp.age, emp.sal);
}

fclose(file);
return (0);
}

/**
 * main - prints out employees' details
 * Return: 0 on succes, -1 on error
 */

int main(void)
{
if (read_employees() == -1)
{
return (-1);
}
return (0);
}
