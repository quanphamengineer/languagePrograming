
/* Bai tap Array
1. tinh tong cac gia tri chua trong mang
2. Tinh trung binh cac gia tri trong mang
3. Coppy noi dung 2 mang qua lai
4. Tim gia tri Min,Max trong mang
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void printArray(int arrayInput[], int arraySize);
int sumArray(int arrayInput[], int arraySize);
float averageArray(int arrayInput[], int arraySize);
void minMaxArray(int arrayInput[], int arraySize);
void swapArray(int arrayInput1[], int arrayInput2[], int arraySize);
void swapElement(int *elemet1, int *element2);
void sapXepArray(int arrayInput[], int arraySize);
int main()
{
    int array[] = {1, 2, 3, 4, 8};
    int array2[] = {4, 7, 1, 16, 5};
    int size = 5;
    // printf("1. tinh tong gia tri mang %d \n", sumArray(array, size));
    // printf("2. Tinh gia tri trung binh array %0.2f\n", averageArray(array, size));
    // minMaxArray(array, size);
    // swapArray(array, array2, size);
    sapXepArray(array2, size);
}
void printArray(int arrayInput[], int arraySize)
{
    printf("Array Output");
    for (int i = 0; i < arraySize; i++)
    {
        printf(":%d", arrayInput[i]);
    }
    printf("\n");
}
int sumArray(int arrayInput[], int arraySize)
{
    int sum = 0;
    for (int i = 0; i < arraySize; i++)
    {
        sum += arrayInput[i];
    }
    return sum;
}
float averageArray(int arrayInput[], int arraySize)
{
    float average = (float)sumArray(arrayInput, arraySize) / arraySize;
    return average;
}
void minMaxArray(int arrayInput[], int arraySize)
{
    int max = 0, min = 0;
    for (int i = 0; i < arraySize; i++)
    {
        max = arrayInput[0];
        min = arrayInput[0];
        if (max < arrayInput[i])
            max = arrayInput[i];
        if (min > arrayInput[i])
            min = arrayInput[i];
    }

    printf("gia tri min %d \n", min);
    printf("gia tri max %d \n", max);
}
void swapArray(int arrayInput1[], int arrayInput2[], int arraySize) 
{
    printArray(arrayInput1, arraySize);
    printArray(arrayInput2, arraySize);
    int coppyArray[arraySize];
    int *ptr;
    for (int i = 0; i < arraySize; i++)
    {
        coppyArray[i] = arrayInput1[i];
        ptr = &arrayInput1[i];
        *ptr = arrayInput2[i];
        ptr = &arrayInput2[i];
        *ptr = coppyArray[i];
    }
    printArray(arrayInput1, arraySize);
    printArray(arrayInput2, arraySize);
}
void swapElement(int *elemet1, int *element2){
    int temp = 0;
    temp = *elemet1;
    *elemet1 = *element2;
    *element2 = temp;
}
void sapXepArray(int arrayInput[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        int j = i + 1;
        int min = i;
        for (j; j < arraySize; j++)
        {
            if (arrayInput[min] > arrayInput[j])
            min=j;
        }
        if(min!=j)
        swapElement(&arrayInput[i], &arrayInput[min]);
    }
    printArray(arrayInput, arraySize);
}