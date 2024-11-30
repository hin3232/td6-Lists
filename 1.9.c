#include <stdio.h>
void rm(int l[],int L ,int *y){
    int l2[L];
    int k=0;
    for (int i =0;i<L ; i++){
        int d=0;
        for (int j=0;j<k;j++){
            if (l[i]==l2[j]){
                d=1;
                break;
            }
        }
     if (d==0){
        l2[k]=l[i];
        k++;
      }
      
    }
    for (int i=0;i<k;i++){
        l[i]=l2[i];
    }
    *y=k;
}
int main() {
    int size;

    printf("Number of items in the list: ");
    scanf("%d", &size);

    int L[size];
    printf("Enter items:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &L[i]);
    }
        int new_size;
     rm(L, size, &new_size);

    printf("List without duplicates:\n");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", L[i]);
    }
    printf("\n");

    return 0;
}

