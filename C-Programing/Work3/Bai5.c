/*
Nhập số dương h sau đó in ra tam giác số đối xứng chiều cao h.
Ví dụ h = 5:
                1
              1 2 1
            1 2 3 2 1
          1 2 3 4 3 2 1
        1 2 3 4 5 4 3 2 1
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
    char arrayKyTu[(2 * ah - 1)];
    char *ptr = &arrayKyTu;
    for (int i = 0; i < ah ; i++)
    {

				for (int j = 0; j <= 2 * ah - 2; j++)
				{
					if (j==((2*ah-2)/2+i))
					{
						ptr = &arrayKyTu[j];
						*ptr = '*';
					}
					else if (j==(2*ah-2)/2-i)
					{
						ptr = &arrayKyTu[j];
						*ptr = '*';
					}
					else
					{
						ptr = &arrayKyTu[j];
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
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int h, i, j;
//     printf("Nhap so duong h: ");
//     scanf("%d", &h);

//     if (h > 0)
//     {
//         for (i = 1; i <= h; i++)
//         {
//             for (j = 1; j < 2 * h; j++)
//             {
//                 if (abs(h - j) <= (i - 1))
//                 {
//                     printf("%3d", i - abs(h - j));
//                 }
//                 else
//                 {
//                     printf("   ");
//                 }
//             }
//             printf("\n");
//         }
//     }
//     else
//     {
//         printf("Vui long nhap h > 0.");
//     }

//     return 0;
// }
