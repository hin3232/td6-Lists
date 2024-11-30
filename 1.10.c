#include <stdio.h>
#include <limits.h>


int Kth(int L[], int k, int l) {
    int max, indx_max;
    for (int i = 0; i < k; i++) {
        max = L[0];
        indx_max = 0;
        for (int j = 1; j < l; j++) {
            if (L[j] > max) {
                max = L[j];
                indx_max = j;
            }
        }
        L[indx_max] = INT_MIN; 
    }
    return max; 

int main() {
    int size, k;

  
    printf("Enter the number of elements in the list: ");
    scanf("%d", &size);
    int L[size];

   
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &L[i]);
    }

   
    printf("Enter the value of k: ");
    scanf("%d", &k);

   
    if (k > 0 && k <= size) {
        printf("The %d-th largest element is: %d\n", k, Kth(L, k, size));
    } else {
        printf("k is invalid.\n");
    }

    return 0;
}
