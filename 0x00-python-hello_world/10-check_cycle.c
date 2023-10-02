#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to list to check
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *circle1 = list, *circle2 = list;

	while (circle1 && circle2 && circle2->next)
	{
		circle1 = circle1->next;
		circle2 = circle2->next->next;
		if (circle1 == circle2)
			return (1);
	}
	return (0);
}
