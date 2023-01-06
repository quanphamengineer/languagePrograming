/*
Nhập số nguyên dương n và tính tổng: S = 1 + 1.2 + 1.2.3 + ... + 1.2.3...n.
S=1!+2!+3!+....n!
*/
#include <stdio.h>
/*khai báo prototype*/
int functionSumDeQuy(int InputN);
int main()
{
    /*u32Input = 4 bytes */
    unsigned int u32Input = 0;
    unsigned long long u64Sum = 0;
    unsigned long long u64GiaiThua = 1;
    /* nhập vào giá trị n*/
    scanf("%d", &u32Input);
    /* tính giai thừa sử dụng vòng lặp*/
    u64Sum = 0;
    for (unsigned int i = 1; i <= u32Input; i++)
    {
        u64GiaiThua *= i;
        u64Sum += u64GiaiThua;
    }
    printf("su dung For sum=%lld\n", u64Sum),
    /*tính tổng giai thừa úng dụng đệ quy*/
    u64Sum = 0;
    for ( int i = 1; i <= u32Input; i++)
    {
        u64Sum+=functionSumDeQuy(i);
    }
    printf("su dung de quy sum=%lld\n", u64Sum);
    return 0;
}
/*sử dụng đệ quy tính tổng giai thừa n!= n * (n-1)! */
int functionSumDeQuy(int InputN)
{
    if (InputN == 1)
    {
        return 1;
    }
    return (InputN * functionSumDeQuy(InputN - 1));
}