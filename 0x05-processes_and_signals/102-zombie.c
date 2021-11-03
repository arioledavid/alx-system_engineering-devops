#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - creates an infinite loop to make the program hang
 * Return: 0 always
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * main - creates 5 zombie processes
 * Return: 0 always
 */
int main(void)
{
	int x;
	pid_t zombieProcess;

	for (x = 0; x < 5; x++)
	{
		zombieProcess = fork();
		if (!zombieProcess)
			return (0);
		printf("Zombie process created, PID: %d\n", zombieProcess);
	}

	infinite_while();
	return (0);
}
