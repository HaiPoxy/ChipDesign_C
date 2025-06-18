// Viết chương trình
//  Cho phép nập 1 số nguyên từ bàn phím
//  tìm số lớn nhất trong 2 số
//  Thực hiện bằng cách xây dựng hàm để tìm ra số nguyden lớn nhất bất  kỳ
//  Nếu có thể hãy hoàn thiện chương trình theo hướng sau:
//  - Tạo 1 menu lựa chọn với logic nhu sau:
//    + Nhập 1 tìm gt lớn nhất
//    + Nhập 2 tìm gt nhỏ nhất
//    + Ngoài 2 giá trị này cảnh báo nhập lại 1 hoặc 2
//  - Chương trình chỉ dừng lại khi bấm Ctrl + C
#include <stdio.h>
int find_max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int find_min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
void input_numbers(int *a, int *b)
{
    printf("Nhap so thu nhat: ");
    scanf("%d", a);
    printf("Nhap so thu hai: ");
    scanf("%d", b);
}
int main()
{
    int choice;
    printf("================MENU===============\n");
    printf("1. Nhap 2 so de tim so lon nhat\n");
    printf("2. Nhap 2 so de tim so nho nhat\n");
    printf("3. Thoat\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choice);
    printf("===================================\n");
    switch (choice)
    {
    case 1:
    {
        int a, b;
        input_numbers(&a, &b);
        int max = find_max(a, b);
        printf("So lon nhat la: %d\n", max);
        break;
    }
    case 2:
    {
        int a, b;
        input_numbers(&a, &b);
        int min = find_min(a, b);
        printf("So nho nhat la: %d\n", min);
        break;
    }
    case 3:
        printf("Thoat chuong trinh.\n");
        return 0;
    default:
        printf("Lua chon khong hop le. Vui long chon lai.\n");
    }
    return 0;
}
