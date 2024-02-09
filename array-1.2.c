#include <stdio.h>

main() {
	
    int a,b,n,i;
   
    printf("Enter the first number: ");
    scanf("%d", &a);
   
    printf("Enter the second number: ");
    scanf("%d", &b);
   
    int arr[100];    
    int s = 0;
   
    for ( n = a; n <= b; n++) {
        if (n% 4 == 0) {
            arr[s] = n;
            s++;
        }
    }
   
    printf("\nThe array is: ");
    for (i = 0; i < s; i++) {
        printf("%d", arr[i]);
        printf(" ,");
    }
    printf("\n");
   

}
