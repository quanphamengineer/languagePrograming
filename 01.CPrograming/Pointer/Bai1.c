#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int functionSwap();
int main()
{
int a=0,b=0;
printf("nhap vao man hinh a  ");
scanf("%d",&a);
printf("nhap vao man hinh b  ");
scanf("%d",&b);
functionSwap(&a,&b);
printf("a= %d----b=%d \n",a,b);
printf("%d",functionSwap(a,b));
}
int functionSwap(int *a,int *b)
{
int moveTemp=0;
moveTemp=*a;
*a=*b;
*b=moveTemp;
return 10;
}