#include <stdio.h>

// دالة دمج قائمتين مرتبتين
void merge(int L1[], int size1, int L2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0; // مؤشرات القائمتين والقائمة المدمجة

    // دمج القائمتين حتى ننتهي من إحدى القائمتين
    while (i < size1 && j < size2) {
        if (L1[i] < L2[j]) {
            merged[k] = L1[i++];
            k++;// إضافة العنصر الأصغر من L1
        } else {
            merged[k++] = L2[j++]; // إضافة العنصر الأصغر من L2
        }
    }

    // إذا تبقى عناصر في L1
    while (i < size1) {
        merged[k++] = L1[i++];
    }

    // إذا تبقى عناصر في L2
    while (j < size2) {
        merged[k++] = L2[j++];
    }
}

int main() {
    int size1, size2;

    // قراءة حجم القائمة الأولى
    printf("أدخل عدد العناصر في القائمة الأولى: ");
    scanf("%d", &size1);
    int L1[size1];
    printf("أدخل العناصر في القائمة الأولى (مرتبة تصاعديًا):\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &L1[i]);
    }

    // قراءة حجم القائمة الثانية
    printf("أدخل عدد العناصر في القائمة الثانية: ");
    scanf("%d", &size2);
    int L2[size2];
    printf("أدخل العناصر في القائمة الثانية (مرتبة تصاعديًا):\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &L2[i]);
    }

    // دمج القائمتين
    int merged[size1 + size2]; // القائمة المدمجة
    merge(L1, size1, L2, size2, merged);

    // طباعة القائمة المدمجة
    printf("القائمة المدمجة:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
