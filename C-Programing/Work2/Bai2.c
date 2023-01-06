/*
Nhập số tự nhiên n rồi tính tổng: S = 1 + 2 + ... + n.
*/
#include<stdio.h>
int main (){
    int sum=0,n=0;
    printf("nhap n thuoc day s=1+2+3+..+n : n= ");
    scanf("%d",&n);
    sum=((n+1)*n)/2;
    printf("gia tri day la %d",sum);
}