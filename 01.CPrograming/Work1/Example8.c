#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int chayTiep = 0;
    while (chayTiep < 1)
    {
        int numberRandom = 50;
        int numberInput = 0;
        //   const Max=100,Min=0;
        int doneSequence = 0;
        while (doneSequence < 1)
        {
            printf("nhap vao man hinh so ban doan=");
            scanf("%d", &numberInput);
            if (numberInput == numberRandom)
            {
                printf("Ban da doan trung so\n");
                doneSequence = 1;
            }
            else
            {
                if (numberInput > numberRandom)
                    printf("Ban dang doan gia tri lon hon so bi mat\n");
                else
                    printf("Ban dang doan gia tri nho hon so bi mat\n");
            }
        }
        printf("Ban muon choi tiep khong,neu co nhap vao 1/neu khong thi nhap 0 : ");
        scanf("%d", &chayTiep);
        if (chayTiep == 1)
            chayTiep = 0;
        else
            chayTiep = 1;
    }
    printf("tro choi ket thuc");
}