#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("enter a random number: ");
scanf("%d", &n);

if (n > 0)
{
printf("you've entered a positive number\n");
}
else if (n == 0)
{
printf("the number you've entered is zero\n");
}
else if (n < 0)
{
printf("you've entered a negative number\n");
}
else
{
printf("you've not entered a number\n");
}
return (0);
}
