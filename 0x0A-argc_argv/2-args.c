#include "main.h"
#include <stdio.h>

/**
  * main - Programme that prints all args it recieves
  * @argc: argument count
  * @argv: argument array of strings
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

