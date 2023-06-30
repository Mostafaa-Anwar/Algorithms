#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE     10
#define NOT_FOUND -1

unsigned int My_Data[MAX_SIZE] = {11, 22, 33, 44, 55, 66, 77, 88 ,99 ,100};

unsigned int LinearSearch_1(unsigned int Data[], unsigned int Data_Length, unsigned int Req_Data);
unsigned int LinearSearch_2(unsigned int Data[], unsigned int Data_Length, unsigned int Req_Data);

int main()
{
    unsigned int Ret = 0;

    Ret = LinearSearch_1(My_Data, MAX_SIZE, 77); 
    printf("Element is found with index = %i \n", Ret);


    Ret = LinearSearch_1(My_Data, MAX_SIZE, 999); 
    if(NOT_FOUND == Ret)
    {
        printf("Element is not found in your data \n");
    }

    printf("*************************************************** \n");

    Ret = LinearSearch_2(My_Data, MAX_SIZE, 77);
    printf("Element is found with index = %i \n", Ret);


    Ret = LinearSearch_2(My_Data, MAX_SIZE, 999); 
    if(NOT_FOUND == Ret)
    {
        printf("Element is not found in your data \n");
    }

    return 0;
}

unsigned int LinearSearch_1(unsigned int Data[], unsigned int Data_Length, unsigned int Req_Data)
{
    unsigned int Index = 0;

    for(Index = 0; Index < Data_Length; Index++)
    {
        if(Req_Data == Data[Index])
        {
            return Index;
        }
        else { /* Nothing */ }
    }

    return -1;
}

unsigned int LinearSearch_2(unsigned int Data[], unsigned int Data_Length, unsigned int Req_Data)
{
    unsigned int Left_Index = 0;
    unsigned int Right_Index = Data_Length - 1;

    for(Left_Index = 0; Left_Index <= Right_Index;)
    {
        if(Req_Data == Data[Left_Index])
        {
            return Left_Index;
        }
        else { /* Nothing */ }

        if(Req_Data == Data[Right_Index])
        {
            return Right_Index;
        }
        else { /* Nothing */ }

        Left_Index++;
        Right_Index--;
    }

    return -1;
}










