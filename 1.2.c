#include<stdio.h>


void insert_end(int L[], int x, int *i) {
    L[*i] = x;  // إضافة العنصر في النهاية
    (*i)++;      // زيادة الحجم
}

int main() {
    int L[100];
    int I;
    
    // إدخال عدد العناصر من قبل المستخدم
    printf("Enter the number of items: ");
    scanf("%d", &I);

    // إدخال العناصر من قبل المستخدم
    printf("Ente %d element:\n", I);
    for (int i = 0; i < I; i++) {
        scanf("%d", &L[i]);
    }

    // إدخال عنصر جديد من قبل المستخدم
    int x;
    printf(" New number to add: ");
    scanf("%d", &x);
    
    // استدعاء دالة لإضافة العنصر الجديد
    insert_end(L, x, &I);  // تمرير عنوان I لكي نتمكن من تحديثه

    // عرض العناصر بعد إضافة العنصر الجديد
    printf("الThe elements after adding are::\n");
    for (int i = 0; i < I; i++) {
        printf("%d ", L[i]);
    }

    return 0;
}
