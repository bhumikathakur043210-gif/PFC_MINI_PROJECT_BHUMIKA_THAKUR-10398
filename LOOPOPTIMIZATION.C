#include <stdio.h>
//BHUMIKA THAKUR
//ERP-10398
//PROJECT TITLE-LOOP OPTIMIZATION DEMO

int main() {
    int i;
    int N = 100;
    int sum_for = 0, sum_while = 0;
    int for_count = 0, while_count = 0;

    /* FOR LOOP */
    for (i = 1; i <= N; i++) {
        sum_for += i;
        for_count++;   // counting iterations
    }

    /* WHILE LOOP */
    i = 1;
    while (i <= N) {
        sum_while += i;
        while_count++; // counting iterations
        i++;
    }

    /* RESULTS */
    printf("Using FOR loop:\n");
    printf("Sum = %d\n", sum_for);
    printf("Iterations = %d\n\n", for_count);

    printf("Using WHILE loop:\n");
    printf("Sum = %d\n", sum_while);
    printf("Iterations = %d\n", while_count);

    return 0;
}
//Using FOR loop:
//Sum = 5050
//Iterations = 100

//Using WHILE loop:
//Sum = 5050
//Iterations = 100