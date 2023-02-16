#include <stdio.h>
#define DEBUG_ALL
/*Prototype Function*/
void functionTest1(void);
void functionTest2(void);
void functionRunSequence1(void);
void functionRunSequence2(void);
/*main*/
int main()
{
    /*if define DEBUG_ALL >> run function test not compile code functionRunsequence*/
#ifdef DEBUG_ALL 
    functionTest1();
#endif
    functionRunSequence1();
#ifdef DEBUG_ALL
    functionTest2();
#endif
    functionRunSequence3();
}
/*Function*/
void functionTest1()
{
    printf("test1")
}
void functionTest2()
{
    printf("test2")
}
void functionRunSequence1()
{
    printf("run1")
}
void functionRunSequence2()
{
    printf("run2")
}