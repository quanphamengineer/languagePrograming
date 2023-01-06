/*Nhập số tự nhiên n rồi tính tổng các số tự nhiên không lớn hơn n và chia hết cho 7 */
#include<stdio.h>
int main(){
    unsigned int u32InputN=0;
    unsigned long long u64Sum=0;
    printf("nhap vao so tu nhien n ");
    scanf("%d",&u32InputN);
    for (int i = 7; i <=u32InputN; i+=7)
    {
            u64Sum+=i;
    }
    printf("sum=%lld",u64Sum);
    return 0;
}