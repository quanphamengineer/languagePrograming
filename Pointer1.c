// cong hai so su dung con tro trong C
#include<stdio.h>
int sumNum(int a,int b);
int main(){
    int a=0;
    int b=0;
    printf("nhap vao a ");
    scanf("%d",&a);
    printf("nhap vao b ");
    scanf("%d",&b);
    printf("gia tri tinh qua pointer %d",sumNum(a,b));
}
int sumNum(int a,int b){
    int sum=0;
    int *ptra=&a;
    int *ptrb=&b;
    sum=*ptra+*ptrb;
    return sum;
}