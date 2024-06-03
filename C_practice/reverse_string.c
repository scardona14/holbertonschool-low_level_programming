#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char str[100];
  int l, i;
  printf("\n\nPrint individual characters of string in reverse order : \n");
  printf("---------------------------------------------------------\n");
  printf("Input the string : ");
  scanf("%s", str);

  l = strlen(str);

  printf("The characters of the string in reverse are : \n");

  for (i = l; i >= 0; i--) {
    printf("%c  ", str[i]);
  }
  printf("\n");
  printf("--------------------");
  return 0;
}