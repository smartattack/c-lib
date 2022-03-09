/*
 * Generic linked list implementation
 */

#include "list.h"
#include <ctype.h>
#include <stdlib.h>




void list_add(List_t *list, void *data)
{
    ListNode_t *node;
    node = malloc(sizeof(ListNode_t));
    node->data = &data;
    node->next = list->head;
    list->head = node;
    list->size++;
}

void list_del(List_t *list, void *data)
{

}

List_t *list_init()
{
    List_t *list;
    list = (List_t *)malloc(sizeof(List_t));
    list->head = NULL;
    list->size = 0;
    return list;
}

void list_free(List_t *list)
{
    ListNode_t *node;
    
    while (list->head != NULL)
    {
        node = list->head;
        list->head = node->next;
        free(node);
        free(node->data);
    }
    free(list);
    list = NULL;
}


