/*exemple 6: Viết chương trình nhập vào hai cạnh của hình chữ nhật và tính chu vi và diện
tích của hình chữ nhật đó. Hiển thị kết quả lên màn hình.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b;
    int chuVi, dienTich;
    printf("nhap vao man hinh lan luot 2 canh hinh chu nhat MNPQ:\n");
    scanf("%d%d",&a, &b);
    chuVi = (a + b) * 2;
    dienTich = (a * b);
    printf("chu vi hinh MNPOQ=%d \n", chuVi);
    printf("dien tich hinh MNPQ=%d", dienTich);
}
