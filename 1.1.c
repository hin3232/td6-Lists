#include <stdio.h>
int main() {
    int L[5]; 
    int i = 0; 

    printf("Enter numbers:\n");
    while (i < 5) {
        scanf("%d", &L[i]); 
        i++;
    }

    printf("You entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", L[i]); 
    }

    return 0;
}
