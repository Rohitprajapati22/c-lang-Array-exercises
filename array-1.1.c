#include <stdio.h>
main() {
    int a, b, n, i, j;

    printf("Enter array A size : ");
    scanf("%d", &a);

    int arra[a];

    printf("Enter array A elements :\n");
    for (i = 0; i < a; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arra[i]);
    }

    printf("\nEnter array B size : ");
    scanf("%d", &b);

    int arrb[b];

    printf("\nEnter array B elements :\n");
    for (i = 0; i < b; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &arrb[i]);
    }

    n = a+b;
    int arrc[n];

    for (i = 0; i < a; i++) {
        arrc[i] = arra[i];
    }

    for (j = 0; j < b; j++) {
        arrc[a + j] = arrb[j];
    }
    printf("array c is: ");
    for (i = 0; i < n; i++) {
        printf("%d", arrc[i]);
            printf(" ,");        
    }
    printf("\n");

}
