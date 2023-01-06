#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int soNhapVao;
    scanf("%d",&soNhapVao);
    if (soNhapVao > 0)
    {
        int chanLe = soNhapVao % 2;
        if (chanLe == 0)
            printf("so %d la so chan", soNhapVao);
        else if (chanLe!=0)
            printf("so %d la so le", soNhapVao);
    }
    else if (soNhapVao == 0)
        printf("so %d la so 0", soNhapVao);
    else
        printf("so %d la so am", soNhapVao);


}