/* tim so max trong day a,b,c,d . Neu a=b=c=d thi thong bao day ko co so lon nhat */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void searchMax();
int arrayMax[] = {};
int main()
{
    printf("nhap vao man hinh a=");
    scanf("%d", &arrayMax[0]);
    printf("nhap vao man hinh b=");
    scanf("%d", &arrayMax[1]);
    printf("nhap vao man hinh c=");
    scanf("%d", &arrayMax[2]);
    printf("nhap vao man hinh d=");
    scanf("%d", &arrayMax[3]);
    int max = arrayMax[0];
    searchMax(max);
}
void searchMax(int max)
{
    // int max = arrayMax[0];
    if (arrayMax[0] == arrayMax[1] && arrayMax[1] == arrayMax[2] && arrayMax[2] == arrayMax[3])
    {
        printf("day so khong co so lon nhat");
    }
    else
    {
        for (int i = 1; i < 4; i++)
        {
            if (max <= arrayMax[i])
            {
                max = arrayMax[i];
            }
        }
        printf(" so lon nhat day so la: %d ", max);
    }
}