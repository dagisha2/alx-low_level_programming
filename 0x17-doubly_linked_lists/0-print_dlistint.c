#include "lists.h"
/**
 * print_dlistint - print number of nodes
 * @h: pointer
 *
 * Return: len
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp = h;
int len = 0;
while (temp != NULL)
{
len++;
temp = temp->next;
}
return (len);
}
