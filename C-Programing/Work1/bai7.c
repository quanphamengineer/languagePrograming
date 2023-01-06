/* giải và biện luan phuong trinh bac nhat */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    int a, b;
    double x;
    printf("nhap vao 2 so a,b cua phuong trinh bac nhat ax+b=0\n");
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    if (a == 0)
    {
        printf("khong the thuc hien phuong trinh voi a=0");
    }
    else
    {
        x =(double) -b / a;
        printf("gia tri cua x=%0.2f", x);
    }
}