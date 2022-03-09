#ifndef __LIST_H__
#define __LIST_H__

#include <stddef.h>

struct _ListNode;
struct _List;

struct _ListNode {
    void *data;
    struct _ListNode *next;
};

struct _List {
    struct _ListNode *head;
    size_t size;
};

typedef struct _ListNode ListNode_t;
typedef struct _List List_t;

void list_add(List_t *list, void *data);
void list_del(List_t *list, void *data);
List_t *list_init();
void list_free(List_t *list);


#endif