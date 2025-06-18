// khai báo 1 mảng gồm 10 phần tử, nhập vào các phần tử của mảng và in ra các phần tử đó

#include <stdio.h>
int main()
{
    int arr[7];
    // Khai báo mảng gồm 7 phần tử
    // Nhập vào các phần tử của mảng
    for (int i = 0; i < 7; i++)
    {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    // In ra các phần tử của mảng
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }

    // tìm số lớn nhất trong mảng
    int max = arr[0];
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("So lon nhat trong mang la: %d\n", max);

    // tìm số nhỏ nhất trong mảng
    int min = arr[0];
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("So nho nhat trong mang la: %d\n", min);

    // Tính tổng các phần tử trong mảng
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum = sum + arr[i];
    }
    printf("Tong cac phan tu trong mang la: %d\n", sum);
    return 0;
}