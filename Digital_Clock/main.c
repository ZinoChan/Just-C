#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
	int h,m,s;
	int d=1;
	
	printf("Please Enter Hour : \n");
	scanf("%d", &h);
	
	if(h>12) 
	{
		printf("Incorrect Hour (must be less than 12)\n");
		exit(0);
	}

	printf("Please Enter Minute : \n");
	scanf("%d", &m);

	if(m>60) 
	{
		printf("Incorrect Minute (must be less than 60)\n");
		exit(0);
	}

	printf("Please Enter Second : \n");
	scanf("%d", &s);

	if(s>60) 
	{
		printf("Incorrect Second (must be less than 60)\n");
		exit(0);
	}
	
	while(1)
	{
		s++;
		if(s > 59) 
		{
			m++;
			s=0;
		}
		if(m > 59) 
		{
			h++;
			m=0;
		}
		if(h > 12) h = 1;

		printf("Clock: %02d:%02d:%02d \n", h,m,s);
		sleep(d);
		system("clear");
	}
}
