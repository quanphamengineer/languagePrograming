#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int a,b;
    printf("nhap vao man hinh a=");
    scanf("%d",&a);
    printf("nhap vao man hinh b=");
    scanf("%d",&b);
    if(a>b)
    printf("%d lon hon %d",a,b);
    if(a<b)
    printf("%d nho hon %d",a,b);
    if(a==b)
    printf("%d bang %d");
}