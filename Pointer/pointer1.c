#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    // Giá trị của biến a
    printf("Gia tri cua a: %d\n", a);
    // Địa chỉ của biến a
    printf("Dia chi cua a: %p\n", &a);
    // Giá trị tham chiếu của con trỏ p
    printf("Gia tri cua p: %d\n", *p);
    // Giá trị của con trỏ p
    printf("Dia chi cua p: %p\n", p);
    // Địa chỉ của con trỏ p
    printf("Dia chi cua p: %p\n", &p);

    *p += 5; // Tăng giá trị của a thông qua con trỏ p
    // In giá trị của a sau khi tăng
    printf("Gia tri cua a sau khi tang: %d\n", a);
    printf("Gia tri cua p sau khi tang: %d\n", &a);
    printf("Gia tri cua p sau khi tang: %d\n", &p);
    // thay đổi giá trị của a
    a = 100;
    // In giá trị của a và p sau khi thay đổi
    printf("Gia tri cua a sau khi thay doi: %d\n", a);
    printf("Gia tri cua p sau khi thay doi: %d\n", *p);
    // In địa chỉ của a và p
    printf("Dia chi cua a: %p\n", &a);
    printf("Dia chi cua p: %p\n", p);
    printf("Dia chi cua p: %p\n", &p);
    *p = 200; // Thay đổi giá trị của a thông qua con trỏ p
              // In giá trị của a và p sau khi thay đổi
    printf("Gia tri cua a sau khi thay doi: %d\n", a);
    printf("Gia tri cua p sau khi thay doi: %d\n", *p);
    // In địa chỉ của a và p
    printf("Dia chi cua a: %p\n", &a);
    printf("Dia chi cua p: %p\n", p);
    printf("Dia chi cua p: %p\n", &p);
    return 0;
}