#include <stdio.h>

// دالة لعكس المصفوفة L
// Function to reverse the array L
void reverse(int L[], int size) {
    int temp;  // متغير مؤقت لتخزين العناصر أثناء التبديل
               // Temporary variable to store elements during swapping
    int start = 0;  // الفهرس الأول للمصفوفة
                    // Start index of the array
    int end = size - 1;  // الفهرس الأخير للمصفوفة
                         // End index of the array
    
    while (start < end) {  // التكرار حتى نصل إلى المنتصف
                             // Loop until we reach the middle
        // تبديل العنصر في الفهرس start مع العنصر في الفهرس end
        // Swap the element at start index with the element at end index
        temp = L[start];
        L[start] = L[end];
        L[end] = temp;
        
        // زيادة start وتقليل end للتوجه نحو المنتصف
        // Increment start and decrement end to move towards the middle
        start++;
        end--;
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
    
    // عكس المصفوفة
    reverse(L, size);
    
    // طباعة المصفوفة بعد العكس
    printf("المصفوفة بعد العكس:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", L[i]);
    }
    printf("\n");

    return 0;
}
