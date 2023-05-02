#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sum up the total data (n) of a linked list
 * @head : pointer to head of singly linked list
 * Return: sum of all the data (n),
 *         or 0 - if the list is blank
 */
int sum_listint(listint_t *head)
{
int add;

add = 0;

while (head)
{
add += head->n;
head = head->next;
}
return (add);
}
