#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: a pointer head
 * @number: an integer
 * Return: the address of the new node, or NULL
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *me_node;
	listint_t *before_node = NULL;
	listint_t *node;

	if (!head)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = number;
	if (!(*head))
	{
		node->next = NULL;
		*head = node;
		return (node);
	}
	if (number < (*head)->n)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	me_node = *head;
	while (me_node != NULL && me_node->n <= number)
	{
		before_node = me_node;
		me_node = me_node->next;
	}
	node->next = me_node;
	before_node->next = node;

	return (node);
}
