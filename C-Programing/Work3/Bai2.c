/*
Nhập vào hai số dương m, n sau đó in ra hình chữ nhật rỗng bằng các
dấu x. Ví dụ với m = 4, n = 5:
                        x x x x x
                        x x x x x
                        x x x x x
                        x x x x x
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m = 0, n = 0;
    char kyTu = 'X';
    printf("nhap vao 2 chieu dai chieu rong lan luot m,n:");
    scanf("%d %d",&m,&n);
    for (int i = 1; i < m+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            printf("%c ", kyTu);
        }
        printf("\n");
    }
}