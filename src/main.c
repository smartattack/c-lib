#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"





void print_list(List_t *list)
{
   ListNode_t *node;

   node = list->head;
   while (node)
   {
      printf("%p (%d) -> ", node->data, node->data);
      node = node->next;
   }
}


int main(int argc, char **argv) {

#if 0
  	char *cmd;
      cmd = malloc(1024);
      sprintf(cmd, "%s", "  Eight  or  Eighteen    ");
#endif

      List_t *list;
      list = list_init();

      int x;
      x = 1;
      list_add(list, &x);
      x = 2;
      list_add(list, &x);
      x = 10;
      list_add(list, &x);

      print_list(list);


}
