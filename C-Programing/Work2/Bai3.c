/*
 Nhập số tự nhiên n rồi tính tổng(lưu ý phép chia các số nguyên):
S = 1+1/2+1/3+..+1/n
*/
#include <stdio.h>
int main()
{
    int n = 0;
    float sum = 0;
    printf("nhap vao man hinh n thuoc day S = 1+1/2+1/3+..+1/n ");
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        sum += (float)1 / (i);
    }
    printf("S=%0.2f", sum);
}