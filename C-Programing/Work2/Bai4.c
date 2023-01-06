/*
Nhập vào một số tự nhiên n rồi tính:
a) S = tổng các số tự nhiên không lớn hơn n.
b) S1 = tổng các số tự nhiên lẻ không lớn hơn n.
c) S2 = tổng các số tự nhiên chẵn không lớn hơn n.
*/
#include <stdio.h>
int main()
{
    int sum = 0, sum1 = 0, sum2 = 0, n = 0;
    printf("nhap vao so tu nhien n ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if ((i % 2) == 0)
            sum2 += i;
        else
            sum1 += i;
    }
    sum = (n * n) / 2;
    printf("gia tri s= %d \n", sum);
    printf("gia tri s1= %d \n", sum1);
    printf("gia tri s2= %d \n", sum2);
}