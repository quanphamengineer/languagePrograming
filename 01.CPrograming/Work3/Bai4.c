/*
Nhập số dương h sau đó in ra tam giác ABC cân tại A với chiều cao AH.(BC=2AH-1)  Ví dụ h = 5:
          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int kyTu1 = 1;
    int kyTu2 = 0;
    int ah = 0;
    printf("nhap vao man hinh chieu cao AH ");
    scanf("%d", &ah);
    // Dùng 1 mảng có số phần tử bằng với kích thước cạnh đáy - sau đó dùng pointer chèn vào các ký tự '*' và ' '
    char arrayKyTu[(2 * ah - 1)];
    char *ptr = &arrayKyTu;
    for (int i = 1; i < ah + 1; i++)
    {

        for (int j = 1; j < 2 * ah; j++)
        {
            int tempArray = j - 1;
            if (j > (ah - i) && j < (ah + i))
            {
                ptr = &arrayKyTu[tempArray];
                *ptr = '*';
            }
            else
            {
                ptr = &arrayKyTu[tempArray];
                *ptr = ' ';
            }
        }
        for (int h = 0; h <= (2 * ah - 2); h++)
        {
            printf("%c ", arrayKyTu[h]);
        }
        printf("\n");
    }
}