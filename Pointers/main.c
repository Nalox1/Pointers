#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int tuna;
    printf("Choose an number: ");
    scanf("%d", &tuna);

    printf("Address \t Name \t Value \n");
    printf("%p \t %s \t %d \n", &tuna, "tuna", tuna);

    int *pTuna = &tuna;

    printf("%p \t %s \t %d \n", pTuna, "tuna", tuna);

    printf("%p \t %s \t %p \n", &pTuna, "pTuna", pTuna);

    return 0;
}
