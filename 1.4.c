#include <stdio.h>

// دالة للبحث عن العنصر x في المصفوفة L
// Function to search for element x in the array L
int search(int L[], int size, int x) {
    for (int i = 0; i < size; i++) {  // التكرار عبر المصفوفة
                                          // Loop through the array
        if (L[i] == x) {  // إذا تم العثور على العنصر
                            // If the element is found
            return i;  // إرجاع فهرس العنصر
                       // Return the index of the element
        }
    }
    return -1;  // إذا لم يتم العثور على العنصر
                 // If the element is not found
}

int main() {
    int size;  // عدد العناصر في المصفوفة
               // The number of elements in the array
    
    // طلب عدد العناصر من المستخدم
    // Asking the user for the size of the array
    printf("أدخل عدد العناصر في المصفوفة: ");  
    // Input the size of the array
    scanf("%d", &size);  
    
    int L[size];  // تعريف المصفوفة بالحجم الذي أدخله المستخدم
                  // Define the array with the size provided by the user

    // طلب المدخلات للمصفوفة
    // Asking the user to input the elements of the array
    printf("أدخل العناصر في المصفوفة:\n");
    for (int i = 0; i < size; i++) {
        printf("العنصر %d: ", i + 1);  
        // Asking for each element
        scanf("%d", &L[i]);  
    }
    
    int x;  // العنصر الذي نبحث عنه
            // The element we are searching for

    // طلب العنصر الذي نبحث عنه
    // Asking the user for the element to search for
    printf("أدخل العنصر الذي تريد البحث عنه: ");
    scanf("%d", &x);  // إدخال العنصر
    
    // طباعة النتيجة
    // Printing the result
    int result = search(L, size, x);
    if (result != -1) {
        printf("فهرس العنصر %d: %d\n", x, result);  // تم العثور على العنصر
                                                    // Element found
    } else {
        printf("العنصر %d غير موجود في المصفوفة\n", x);  // لم يتم العثور على العنصر
                                                       // Element not found
    }

    return 0;
}
