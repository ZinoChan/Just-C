#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry Point
 * Description: Prints a clock
 * Return: 0
*/

int main(void)
{
	int h, m, s;
	int d = 1;
	
	printf("Please Enter Hour : \n");
	scanf("%d", &h);
	
	if (h > 12 || h < 0) 
	{
		printf("Incorrect Hour (must be in range: 0 to 12)\n");
		exit(0);
	}

	printf("Please Enter Minute : \n");
	scanf("%d", &m);

	if (m > 60 || m < 0) 
	{
		printf("Incorrect Minute (must be in range 0 to 60)\n");
		exit(0);
	}

	printf("Please Enter Second : \n");
	scanf("%d", &s);

	if (s > 60 || s < 0) 
	{
		printf("Incorrect Second (must be in range 0 to 60)\n");
		exit(0);
	}
	
	while (1)
	{
		s++;
		if (s > 59) 
		{
			m++;
			s=0;
		}
		if (m > 59) 
		{
			h++;
			m=0;
		}
		if (h > 12) h = 1;

		printf("Clock: %02d:%02d:%02d \n", h,m,s);
		sleep(d);
		system("clear");
	}

	return (0);
}
