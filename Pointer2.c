// tinh tong cua mang su dung pointer
#include <stdio.h>
int main()
{
    int arraySum[] = {2, 3, 4, 5, 6};
    printf("sum array %d",sumArray(arraySum[5],5));
}
int sumArray(int arSum[], int num)
{
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        int *ptr = &arSum[i];
        sum = sum + *ptr;
    }
    return sum;
}