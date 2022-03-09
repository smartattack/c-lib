#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stringutil.h"

int main(int argc, char **argv) {

      char *cmd, *copy;
      cmd = malloc(1024);
      copy = malloc(1024);
      sprintf(cmd, "%s", "  Eight  or  Eighteen    ");
      strcpy(copy, cmd);

      printf("Original: |%s|\n", cmd);
      trim_whitespace(&cmd);
      printf("Trimmed:  |%s|\n", cmd);
      reverse(&copy);
      printf("Reversed: |%s|\n", copy);

}
