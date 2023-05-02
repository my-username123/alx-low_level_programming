#include "lists.h"
/**
 * pop_listint - removes the head node
 * @head : pointer to head of the linked list
 * Return: head node's data (n)
 *         or 0 - if the linked list is blank
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

temp = *head;

if (temp == NULL)
return (0);

*head = temp->next;
n = temp->n;
free(temp);
return (n);
}
