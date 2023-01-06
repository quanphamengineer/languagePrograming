/*
Hãy nhập vào hai số dương m, n sau đó in ra màn hình một hình chữ
nhật m hàng, mỗi hàng liệt kê các giá trị từ 1 đến n. Ví dụ với m = n = 4:
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
                    int m = 0, n = 0;
                    printf("Nhap vao 2 canh hinh chu nhat m n :");
                    scanf("%d", &m);
                    printf("Nhap vao 2 canh hinh chu nhat m n :");
                    scanf("%d", &n);
                    for (int i = 1; i < m + 1; i++)
                    {
                        for (int j = 1; j < n + 1; j++)
                        {
                            printf("%d ", j);
                        }
                        printf("\n");
                    }
}