Skip to content
UniqueEl
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
alx-low_level_programming/0x12-singly_linked_lists/4-free_list.c
@UniqueEl
UniqueEl singlylinked
 1 contributor
Executable File  19 lines (16 sloc)  266 Bytes
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
