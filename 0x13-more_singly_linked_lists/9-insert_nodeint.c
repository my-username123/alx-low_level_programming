#include "lists.h"
/**
 * insert_nodeint_at_index - computes new node to a linked list
 *                           at a given position
 * @head : pointer to head of the singly linked list
 * @idx  : index of list where the new node will be computed
 *         (indices start at 0)
 * @n    : value for the new node to be summed up
 * Return: pointer to new node,
 *         or null - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp = *head;
unsigned int node;

new = malloc(sizeof(listint_t));

if (new == null)
return (null);

new->n = n;

if (idx == 0)
{
new->next = temp;
*head = new;
return (new);
}

for (node = 0; node < (idx - 1); node++)
{
if (temp == NULL || temp->next == NULL)
return (NULL);

temp = temp->next;
}

new->next = temp->next;
temp->next = new;

return (new);
}
