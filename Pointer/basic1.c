#include <stdio.h>
int main()
{
    int arr[7] = {10, 20, 50, 1, 0, 99, 100}; // Khởi tạo mảng gồm 5 phần tử
    int *p = arr;                             // Khởi tạo con trỏ p trỏ đến mảng arr
    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < 7; i++)
    {
        // printf("arr[%d] = %d\n", i, *(p + i)); // Sử dụng con trỏ để truy cập các phần tử của mảng
        printf("arr[%d] = %d\n", i, *(++p)); // Sử dụng cú pháp mảng để truy cập các phần tử của mảng
    }
}