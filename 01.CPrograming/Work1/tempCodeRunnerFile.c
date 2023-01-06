#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b;
    int tong, hieu, tich; 
    double thuong=a/b;
    printf("nhapvaoso a:");
    scanf("%d", &a);
    printf("nhapvaoso b:");
    scanf("%d", &b);
    printf("tong a+b= %d \n", tong = a + b);
    printf("hieu a-b= %d \n", hieu = a - b);
    printf("tich axb= %d \n", tich = a * b);
    if (b != 0)
        printf("thuong a/b = %2.2f", thuong );
    else
        printf("thuong a/b khong thuc hien duoc");
}