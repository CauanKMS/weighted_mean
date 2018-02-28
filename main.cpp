#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, r;
    int p1, p2, p3;
    char op;

    do {
        printf("Grades:");
        scanf("%f %f %f", &n1, &n2, &n3);

        printf("Weight:");
        scanf("%d %d %d", &p1, &p2, &p3);

        r = (n1 * p1 + n2 * p2 + n3 * p3)/(p1 + p2 + p3);

        printf("\nResult: %f", r);
        printf("\nWanna leave? y/n\n");
        //scanf("%c", op);
        op = getchar();
    }while(op != 'y');

    return 0;
}