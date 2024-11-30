#include <stdio.h>

// دالة لفرز المصفوفة L باستخدام خوارزمية الفقاعات (Bubble Sort)
void sort(int L[], int size) {
    for (int i = 0; i < size - 1; i++) {  // المرور على العناصر
        for (int j = 0; j < size - i - 1; j++) {  // التكرار عبر العناصر غير المرتبة
            // إذا كان العنصر الحالي أكبر من العنصر التالي، نقوم بتبديلهما
            if (L[j] > L[j + 1]) {
                // تبديل العناصر
                int temp = L[j];
                L[j] = L[j + 1];
                L[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    
    // طلب عدد العناصر في المصفوفة
    printf("أدخل عدد العناصر في المصفوفة: ");
    scanf("%d", &size);
    
    int L[size];  // تعريف المصفوفة بالحجم الذي أدخله المستخدم
    
    // طلب المدخلات للمصفوفة
    printf("أدخل العناصر في المصفوفة:\n");
    for (int i = 0; i < size; i++) {
        printf("العنصر %d: ", i + 1);
        scanf("%d", &L[i]);
    }
    
    // فرز المصفوفة
    sort(L, size);
    
    // طباعة المصفوفة بعد الفرز
    printf("المصفوفة بعد الفرز:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", L[i]);
    }
    printf("\n");

    return 0;
}
