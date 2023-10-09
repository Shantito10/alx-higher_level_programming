#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int is_really_palin(listint_t **head, listint_t *next);
/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: head pointer to a linked list
 * Return: 0 if not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return (0);
	if (*head == NULL || (*head)->next == NULL)
		return (1);
	next = *head;
	return (is_really_palin(head, next->next));
}

/**
 * is_really_palin - helps check if a linked list in a palin
 * @head: head pointer to a linked list
 * @next: pointer to a linked list
 * Return: correct if the values are equal
 */
int is_really_palin(listint_t **head, listint_t *next)
{
	if (next->next != NULL && !is_really_palin(head, next->next))
		return 0;
	if ((*head)->n == next->n)
	{
		*head = (*head)->next;
		return (1);
	}
	else
		return (0);
}
