#include <stdio.h>
#include <stdlib.h>

// Pointers are variables that store the memory address of another variable.

int main () {
    int num = 150;
    int *pNum = NULL;

pNum = &num;

printf("Num adress is: %p\n", &num);
printf("Address of pNum: %p\n", &pNum);
printf("Value of pNum: %p\n", pNum);
printf("Value of what pNum is pointing to: %d\n", *pNum);

    return 0;
}