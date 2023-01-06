/* giải và biện luận phương trình bậc 2 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()

{   int a,b,c;
    double denTa,x1,x2;
    printf("nhap vao man hinh a,b,c lan luot gia tri cua phuong trinh bac 2\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    denTa= b*b - 4*a*c;
    if(denTa>0)
    {
     x1=(-b+sqrt(denTa))/2*a;
     x2=(-b-sqrt(denTa))/2*a;
     printf("gia tri nghiem x1=%0.2f,gia tri nghiem x2=%0.2f",x1,x2);
    }
    else if (denTa==0)
    {
        x1=(double)-b/2*a;
        printf("gia tri x1=x2=%0.2f",x1);
    }
    else if (denTa<0)
    {
        printf("phuong trinh vo nghiem");
    }
    
    
}