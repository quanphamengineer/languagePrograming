/*
Nhập chiều cao h=n in ra tam giá kí tự như hình (ex: h=4 )
*  
*  *
*  *  *
*  *  *  *

*/
#include<stdio.h>
#include<stdlib.h>
 int main(){
    char kyTu='*';
    int temp=0;
    printf("Hay nhap vao chieu cao tam giac vuong: ");
    scanf("%d",&temp); 
    for (int i = 1; i <temp+1; i++)
    {
        for (int j = 1;j < i+1; j++)
        {
                printf("%c  ",kyTu);
        }
        printf("\n");
    }
    
 }