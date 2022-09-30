#include "lists.h"

/**
* dlistint_len - print number of nodes
* @h: pointer
*
*Return: len
*/
size_t dlistint_len(const dlistint_t *h)
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
