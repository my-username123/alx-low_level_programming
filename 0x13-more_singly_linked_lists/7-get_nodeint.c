#include "lists.h"
/**
 * get_nodeint_at_index - looks for a particular node in a linked list
 * @head : pointer to head of the linked list
 * @index: index of node to look (indices starting at 0)
 * Return: pointer to desired node,
 *         or NULL - if the node inexist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t n;

for (n = 0; (n < index) && (head->next); n++)
head = head->next;

if (n < index)
return (NULL);

return (head);
}
