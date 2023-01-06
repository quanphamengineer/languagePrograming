/*
Nhập số tự nhiên n sau đó in ra các số chẵn nhỏ hơn n và các số lẻ nhỏ
hơn n.
*/
#include<stdio.h>
int main(){
    int n=0;
    printf("nhap vao so tu nhien n= ");
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        if ((i%2)!= 0)
        {
            printf("%d, ",i);
        }
    }
    printf("\n");
     for (int i = 1; i < n; i++)
    {
        if ((i%2)== 0)
        {
            printf("%d, ",i);
        }
    }
    
}