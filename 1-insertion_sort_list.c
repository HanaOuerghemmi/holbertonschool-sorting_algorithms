#include "sort.h"
/**
 * selection_sort - function that sort selction
 * @array: array
 * @size: size of the array
 */
void insertion_sort_list(listint_t **list)
{
	struct listint_s *currentNode, *swapNode, *prevNode;
	currentNode = *list;
	while((currentNode = currentNode->next))
	{
		swapNode = currentNode;
		while(currentNode->prev != NULL 
				&& currentNode->prev->n > currentNode->n)
		{
			prevNode = currentNode->prev;
			if (swapNode->next != NULL)
				swapNode->next->prev = prevNode;
			if (prevNode->prev != NULL)
				prevNode->prev->next = swapNode;
			else
				*list = swapNode;



			prevNode->next = swapNode->next;
			swapNode->prev = prevNode->prev;
			swapNode->next = prevNode;
			prevNode->prev = swapNode;
			print_list(*list);




		}

	}	
}


