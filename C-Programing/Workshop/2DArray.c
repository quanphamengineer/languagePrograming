/* Bài tập Mảng nhiều chiều
01.Tính tổng 2 mảng cùng kích thước
02.Tính hiệu 2 mảng cùng kích thước
03.Tính tích 2 mảng cùng kích thước
04.Tính giá trị đường chéo chính , đường chéo phụ mảng hình vuông
note: viết function cho các bài trên
hướng phát triển thêm : gom 01,02,03
*/
#include <stdio.h>
#include <stdlib.h>
void scan2DArray(int arrayInput[][100], int *row, int *colum);
void print2DArray(int arrayInput[][100], int row, int colum);
void sumArray(int arrayInput1[][100], int arrayInput2[][100], int arrayInput3[][100], int row, int colum);
void subtractionArray(int arrayInput1[][100], int arrayInput2[][100], int arrayInput3[][100], int row, int colum);
void multiArray(int arrayInput1[][100], int arrayInput2[][100], int arrayInput3[][100], int row, int colum);
void diagonalArray(int arrayInput[][100], int row, int colum, int *cheochinh, int *cheophu);
int main()
{
    int row = 0;
    int colum = 0;
    int cheochinh = 0, cheophu = 0;
    int array1[100][100]; // import data array 1
    int array2[100][100]; // import data array 2
    int array3[100][100]; // save sum
    int array4[100][100]; // save subtraction
    int array5[100][100]; // multi
    /*scan2DArray(array1, &row, &colum);
    print2DArray(array1, row, colum);
    scan2DArray(array2, &row, &colum);
    print2DArray(array2, row, colum);
    sumArray(array1, array2, array3, row, colum);
    print2DArray(array3, row, colum);
    subtractionArray(array1, array2, array4, row, colum);
    print2DArray(array4, row, colum);
    multiArray(array1, array2, array5, row, colum);
    print2DArray(array5, row, colum); */
    scan2DArray(array1, &row, &colum);
    diagonalArray(array1, row, colum, &cheochinh, &cheophu);
    printf("tong duong cheo array %d \n", cheochinh);
    printf("tong duong cheo array %d \n", cheophu);
}
void print2DArray(int arrayInput[][100], int row, int colum)
{
    printf("xuat mang ra man hinh \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf(" %d ", arrayInput[i][j]);
        }
        printf("\n");
    }
}
void scan2DArray(int arrayInput[][100], int *row, int *colum) //
{
    int tempRow = 0, tempColum = 0;
    printf("nhap vao man hinh so hang ");
    scanf("%d", &*row);
    printf("nhap vao man hinh so cot ");
    scanf("%d", &*colum);
    for (int i = 0; i < (*row); i++)
    {
        for (int j = 0; j < (*colum); j++)
        {
            printf("nhap vao mang hang %d cot %d :", i, j);
            scanf("%d", &arrayInput[i][j]);
        }
        printf("\n");
    }
}
void sumArray(int arrayInput1[][100], int arrayInput2[][100], int arrayInput3[][100], int row, int colum) //
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            arrayInput3[i][j] = arrayInput1[i][j] + arrayInput2[i][j];
        }
    }
}
void subtractionArray(int arrayInput1[][100], int arrayInput2[][100], int arrayInput3[][100], int row, int colum) //
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            arrayInput3[i][j] = arrayInput1[i][j] - arrayInput2[i][j];
        }
    }
}
void multiArray(int arrayInput1[][100], int arrayInput2[][100], int arrayInput3[][100], int row, int colum)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            arrayInput3[i][j] = arrayInput1[i][j] * arrayInput2[i][j];
        }
    }
}
void diagonalArray(int arrayInput[][100], int row, int colum, int *cheochinh, int *cheophu)
{
    int sum1 = 0, sum2 = 0;
    int temp = colum - 1;
    if (row != colum)
    {
        printf("ERROR:can nhap array so hang so cot bang nhau \n");
    }
    else
    {
        for (int i = 0; i < row; i++)
        {

            sum1 += arrayInput[i][i];
            sum2 += arrayInput[i][temp - i];
        }
        *cheochinh = sum1;
        *cheophu = sum2;
    }
}