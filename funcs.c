/*
 * funcs.c
 *
 *  Created on: 11-Jun-2022
 *      Author: akhil
 */

#include "fdefs.h"
#include <stdio.h>
#include "variables.h"

void initial()
{
	printf("\nYou are in %d floor",current);

}

void idle()
{
	printf("\nKindly enter the floor you want to go ");
	scanf("%d",&floor);
	printf("\nGoing to %dth Floor\n",floor);
	work(floor);
}

void work(int fl)
{	while(1)
{
	if(current>fl)
	{
		current--;
		printf("lift is in %d\n",current);
	}

	if(current<fl)
	{
			current++;
			printf("lift is in %d\n",current);
	}

	if(current==fl)
		{

				printf("You reached %d floor\n",current);
				break;
		}

}
idle();
}

