#include <stdio.h>

// دالة لحساب عدد مرات ظهور العنصر x في المصفوفة L
// Function to count how many times x appears in the array L
int count(int L[], int size, int x) {
    int count = 0;  // المتغير الذي سيخزن عدد مرات ظهور العنصر
                    // The variable that will store the count of occurrences
    for (int i = 0; i < size; i++) {  // التكرار عبر المصفوفة
                                          // Loop through the array
        if (L[i] == x) {  // إذا تم العثور على العنصر
                            // If the element is found
            count++;  // زيادة العدد
                       // Increment the count
        }
    }
    return count;  // إرجاع عدد مرات ظهور العنصر
                   // Return the count of occurrences
}

int main() {
    int size, L[size]; // عدد العناصر في المصفوفة
               // The number of elements in the array
    
    // طلب عدد العناصر من المستخدم
    // Asking the user for the size of the array
    printf("أدخل عدد العناصر في المصفوفة: ");  
    // Input the size of the array
    scanf("%d", &size);  
    
     // تعريف المصفوفة بالحجم الذي أدخله المستخدم
                  // Define the array with the size provided by the user

    // طلب المدخلات للمصفوفة
    // Asking the user to input the elements of the array
    printf("أدخل العناصر في المصفوفة:\n");
    for (int i = 0; i < size; i++) {
        printf("العنصر %d: ", i + 1);  
        // Asking for each element
        scanf("%d", &L[i]);  
    }
    
    int x;  // العنصر الذي نريد حساب عدد مرات ظهوره
            // The element we want to count occurrences of

    // طلب العنصر الذي نريد حساب ظهوره
    // Asking the user for the element to count occurrences of
    printf("أدخل العنصر الذي تريد حساب عدد مرات ظهوره: ");
    scanf("%d", &x);  // إدخال العنصر
    
    // طباعة النتيجة
    // Printing the result
    int result = count(L, size, x);
    printf("العنصر %d يظهر %d مرة في المصفوفة\n", x, result);  
    // Print how many times the element appears in the array

    return 0;
}
